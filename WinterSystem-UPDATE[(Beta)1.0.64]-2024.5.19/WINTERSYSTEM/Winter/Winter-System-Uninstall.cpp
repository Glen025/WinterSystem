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
		cout<<"Winter System SETUP\n-------------------------\nUninstall...\n-------------------------\nEnter Command Number...\n--------\n1=Uninstalling The \"Winter System\"\n2=Exit\n";
		cin>>c;
		if(c!=1){
			return 0x00000009;
		}
		system("Del /q /s /f C:\\Winter\\*");
		system("Rd /q C:\\Winter\\WinterSystem\\");
		system("Rd /q C:\\Winter\\");
		Sleep(1980);
		cout<<"Complete!\n";
		Sleep(2100);
		system("cls");
		cout<<"Winter System SETUP\n-------------------------\nUninstall Complete!\n-------------------------\nEnter Command Number...\n--------\n0=Exit\n";
		cin>>c;
	}
	return 0;
}
