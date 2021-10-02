/*
	Tobby制作:极域退出器自助升级 
*/ 
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
void update(){
	system("cls");
	printf("按任意键开始更新...\n");
	getchar();
	system("del updater.txt");
	system("wget 110.42.165.123/jy/updater.txt");
	system("cls");
	string updater;
	freopen("updater.txt","r",stdin);
	getline(cin,updater);
	printf("更新内容:\n"); 
	cout<<updater<<endl;
	system("PAUSE");
	system("del data.zip");
	system("wget 110.42.165.123/jy/data.zip");
	system("cls");
	system("md Temp"); 
	system("7z x -o Temp data.zip");
	system("del data.zip");
	CopyFile("Temp\jiyu-easy-exiter.cpp",":\\jiyu-easy-exiter.cpp",true);
	system("del more.zip");
	system("wget 110.42.165.123/jy/more.zip");
	system("7z x more.zip");
	system("del more.zip");
	system("cls");
	printf("更新完成...\n");
	
}
inline bool file_test(const std::string& name) {
    ifstream f(name.c_str());
    return f.good();
}//判断文件是否存在 
int main(){
	printf("开始检测版本...\n");
	system("del list.txt");
	system("wget 110.42.165.123/jy/list.txt");
	freopen("list.txt","r",stdin);
	double b;
	cin>>b;
	fclose(stdin);
	if(!file_test("now.txt")){
		ofstream fout("now.txt");
		fout<<b;
		fout.close();
	}else{
		freopen("now.txt","r",stdin);
		double bn;
		cin>>bn;
		fclose(stdin);
		if(bn<b){
			printf("版本过旧，自动更新...\n");
			update();
		}
	}
	printf("按任意键退出...\n");
	getchar();getchar();
	return 0;
}
