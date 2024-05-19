#include <bits/stdc++.h>
#include <windows.h>
using namespace std;


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
		ShowWindow(GetConsoleWindow(),SW_HIDE);
		ManagerRun(argv[0],"2");
		return 1;
	}else if(argc == 2)
	{
		int c;
		cout<<"Winter System SETUP\n-------------------------\nInstall...\n-------------------------\nEnter Command Number...\n--------\n1=Installing The \"Winter System\"\n2=Exit\n";
		cin>>c;
		if(c!=1){
			return 0x000000ED;
		}
		system("md C:\\Winter\\");
		system("md C:\\Winter\\WinterSystem\\");
		system("md C:\\Winter\\WinterSystem\\Files\\");
		Sleep(1980);
		system("copy .\\Winter\\WinterSystem\\Files\\* C:\\Winter\\WinterSystem\\Files\\");
		system("copy .\\Winter\\WinterSystem\\* C:\\Winter\\WinterSystem\\");
		system("copy .\\Winter\\* C:\\Winter\\");
		system("del /f /s /q C:\\Winter\\Winter-System-Uninstall.exe");
		system("copy .\\Winter\\Winter-System-Uninstall.exe C:\\Windows\\");
		Sleep(890);
		cout<<"Complete!\n";
		Sleep(2100);
		system("cls");
		cout<<"Winter System SETUP\n-------------------------\nInstall Complete!\n-------------------------\nEnter Command Number...\n--------\n0=Exit\n";
		cin>>c;
	}
	return 0;
}
