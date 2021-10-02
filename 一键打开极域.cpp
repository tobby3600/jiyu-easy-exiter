#include<bits/stdc++.h>
#include<windows.h>
using namespace std; 
int main(){
	int i=10;
	printf("请输入打开个数:");
	cin>>i;
	for(int j=1;j<=i;j++){
		system("StudentMain.exe");
	}
	printf("执行成功,Ctrl+C退出!");
	while(1);
	system("PAUSE"); 
	return 0;
}
