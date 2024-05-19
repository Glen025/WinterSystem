/*
	Winter System
	Name: Winter System
	Copyright: GLEN.Inc
	Author: Glen
	Update Date: 12/03/24 20:46
	Version: 1.1.6 || preview_1.100.61.0217A\24
*/
#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int a[1000];
void logw(int l){
	fstream lw("WinterSystemLog.winterlog",ios::app);
	switch (l) {
		case 1:
			lw<<"Winter System Starting...\nLog Begin---->>>\nComplete\n";
			break;
		case 2:
			//todo
			break;
		default:
			//TODO
			break;
	}
	lw.close();
}
int main (){
	char A;
	system("title Winter System");
	system("cd /D C:\\Winter\\WinterSystem\\");
	Sleep(390);
	system ("cls");
	Sleep(1000);
	cout<<"Winter System\n-------------------------\nStarting...\n-------------------------\nLoading Files[###       ]\n\n";
	Sleep(400);
	system("cls");
	cout<<"Winter System\n-------------------------\nStarting...\n-------------------------\nLoading Files[#######   ]\n\n(C)Copyright GLEN 2023 All Right Resrrvnd";
	ifstream start("C:\\Winter\\WinterSystem\\NORMstart");
	Sleep(1600);
	if(!start.is_open()){
		cout<<"\n\nNo Boot File!  Cannot Start \"Winter System\"!\nPress Any To Exit...\n";
		system("pause");
		return 0;
	}
	start.close();
	system("cls");
	system("del C:\\Winter\\WinterSystem\\NORMstart");
	cout<<"Winter System\n-------------------------\nStarting...\n-------------------------\nLoading Files[##########]\n\n(C)Copyright GLEN 2023 All Right Resrrvnd";
	Sleep(1400);
	logw(1);
/*start>>*/for ( ; ; ){
	system("cls");
	cout<<"Winter System\n-------------------------\nSystem Control Pad\n-------------------------\n>>Enter Command Number...\n----------\n1=Application\n8=System Settings\n9=System Info\n0=Shutdown\n";
	cin>>A;
	switch (A) {
		case '1':
			system("cls");
			cout<<"Winter System\n-------------------------\nApplication\n-------------------------\n>>Enter Command Number...\n----------\n1=Calculator\n2=TestProgram\n";
			cin>>A;
			switch (A) {
				case '1':

					system("C:\\Winter\\WinterSystem\\Calculator.exe");
					break;
				case '2':
					system("C:\\Winter\\WinterSystem\\Files\\untitled2.exe");
				default:
					cout<<"Bad Command,The System Will Return To \"Control Pad\"";
					Sleep(1000);
					break;
			}
			break;
		case '8':
			system ("cls");
			cout<<"Winter System\n-------------------------\nSystem Settings\n-------------------------\n>>Enter Command Number...\n----------\n1=Color Settings\n0=Exit\n";
			cin>>A;
			switch (A) {
				case '1':
					system ("cls");
					cout<<"Winter System\n-------------------------\nSystem Settings>>Color Settings\n-------------------------\n>>Enter Command Number...\n----------\n1=White Text On Black Background\n2=White Text On Blue Background\n0=Exit\n";
					cin>>A;
					switch (A) {
						case '1':
							system("color 0f");
							break;
						case '2':
							system("color 1f");
							break;
						default:
							cout<<"Bad Command,The System Will Return To \"Control Pad\"";
							Sleep(1000);
							break;
					}
					break;
				case '0':
					break;
				default:
					cout<<"Bad Command,The System Will Return To \"Control Pad\"";
					Sleep(1000);
					break;
			}
			break;
		case '9':
			system("cls");
			cout<<"Winter System\n-------------------------\nSystem Infomation\n-------------------------\n>>Enter \"0\"To Exit...\n----------\nHost Computer Information=\n";
			system("cd /D C:\\Winter\\");
			system("systeminfo");
			cout<<"\n\n\n\nWinter System Infomation=\nWinter System\nName: Winter System\nCopyright: GLEN.Inc\nAuthor: Glen\nUpdate Date: 17/07/23 17:46\nVersion: 1.0.2 || preview_1.000.2.0715B\\04\n\n";
			cin>>A;
			break;
		case '0':
			system ("cls");
			cout<<"Winter System\n-------------------------\nShutdown\n-------------------------\n>>Enter Command Number...\n----------\n1=Shutdown\n2=Cancel\n";
			cin>>A;
			switch (A) {
				case '1':
					system ("cls");
					cout<<"Winter System\n-------------------------\nShutting down...\n-------------------------\nClose System[##########]\n\n(C)Copyright GLEN 2023 All Right Resrrvnd\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					Sleep(1400);
					return 0;
					break;
				case '2':
					break;
				default:
					cout<<"Bad Command,The System Will Return To \"Control Pad\"";
					Sleep(1000);
					break;
			}
			break;
		default:
			cout<<"Bad Command";
			Sleep(1000);
			break;
		}
	}
}
