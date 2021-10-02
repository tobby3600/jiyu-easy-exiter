/*
	Tobby制作:极域退出器 1.3
*/
#include<bits/stdc++.h>
#include<windows.h>
using namespace std; 
int main(){
	printf("--By Tobby--\n");
	printf("jiyu-easy-exiter 1.3\n");
	printf("正在退出:\n");
	printf("尝试使用taskkill:");
	system("taskkill /f /t /im StudentMain.exe"); 
	//taskkill方法
	printf("尝试使用ntsd......\n");
    char *sourcefile = "./ntsd.exe";//源文件
    char *targetfile = "C:\Windows\System32\ntsd.exe";//目标文件
    CopyFile(sourcefile , targetfile , false);//false代表覆盖，true不覆盖
	//复制NTSD文件
	printf("尝试清除:\n");
	system("ntsd -c q -pn StudentMain.exe");
	//ntsd强力方法
	printf("程序执行完成!是否检测更新?(Y/N)");
	char f;
	cin>>f;
	if(f=='Y'){
		printf("开始检测...\n");
		system("Update.exe");	
	}
	system("PAUSE"); 
	return 0;
}
