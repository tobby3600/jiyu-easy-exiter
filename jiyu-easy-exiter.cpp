/*
	Tobby����:�����˳��� 
*/
#include<bits/stdc++.h>
#include<windows.h>
using namespace std; 
int main(){
	printf("--By Tobby--\n");
	printf("jiyu-easy-exiter\n");
	printf("�����˳�:\n");
	printf("����ʹ��taskkill:");
	system("taskkill /f /t /im StudentMain.exe"); 
	//taskkill����
	printf("����ʹ��ntsd......\n");
    char *sourcefile = "./ntsd.exe";//Դ�ļ�
    char *targetfile = "C:\Windows\System32\ntsd.exe";//Ŀ���ļ�
    CopyFile(sourcefile , targetfile , false);//false�������ǣ�true������
	//����NTSD�ļ�
	printf("�������:\n");
	system("ntsd -c q -pn StudentMain.exe");
	//ntsdǿ������
	printf("����ִ�����!");
	system("PAUSE"); 
	return 0;
}