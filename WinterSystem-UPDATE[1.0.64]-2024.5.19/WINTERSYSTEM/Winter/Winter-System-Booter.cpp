/*









////////////////////////////////////////////////////////////
// ┌---------------------------------------------------┐//
// | 				Winter System Booter				| //###
// |													| //###
// |[+]File information									| //###
// |├The time of the last edit:2023/1/11-12.57.00.2534	| //###
// |└Producer:GLEN										| //###
// |													| //###
// |[+]WINTER SYSTEM TOOLS information					| //###
// |├Version:com.wintersystembooter.1034				| //###
// |└Info:NONE											| //###
// |													| //###
// |[+]File description									| //###
// |│This is the source file for the "Winter System Boo| //###
// |│ter".												| //###
// |│You can edit this file,But don't compile this file| //###
// |│with the C++ compiler.							| //###
// |│If you compile this file, it may cause the "Winter| //###
// |│System Booter" to not work properly, so please be | //###
// |│careful.											| //###
// |│Thank you again for using "Winter System Booter"	| //###
// |│Glen												| //###
// |└2023/03/12-20:57:00.2534							| //###
// └---------------------------------------------------┘//###
////////////////////////////////////////////////////////////###
   ############################################################
   ############################################################










*/
#include <iostream>
#include <cmath>
#include <windows.h>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
long long opi;
char opc;
void out(){
	system("cls");
	system("color 0f");
	system("title Winter System Booter");
	Sleep(1390);
	cout<<"The Operating System Has Exited\n";
	cout<<"\nEnter Any Value To Exit..\n>>>";
	cin>>opi;
	cout<<"The Program Has Ended With Return Value Of "<<opi<<"\n";
	system("pause");
}
int main(){
	system("cd /D C:\\Winter\\WinterSystem\\");
	system("title Winter System Booter");
	system("echo off");
	for(long long o=0;o>=0;o++){
		Sleep(390);
		system("cls");
		cout<<"WINTER SYSTEM BOOTER\n--------------------------\nSystem Control Pad\n";
		cout<<"-------------------------\nEnter Command Number...\n--------\n";
		cout<<"1=Boot The OS\n0=Exit\n";
		cin>>opi;
		if(opi!=1){
			cout<<"Enter Any Value To Exit..\n>>>";
			cin>>opi;
			cout<<"The Program Has Ended With Return Value Of "<<opi<<"\n";
			system("pause");
			return opi;
		}
		system("cls");
		Sleep(280);
		cout<<"Found The BootLoader File At \".\\WinterSystemBooter.$[WinterSystem].bot.ALMD.boter\"............\n";
		ifstream bootwintersystem("WinterSystemBooter.$[WinterSystem].bot.ALMD.boter");
		Sleep(1290);
		if(! bootwintersystem.is_open()){
			cout<<"[E]-SystemError: "<<strerror(2)<<"\n";
			cout<<"[E]-SystemError: "<<strerror(2)<<"\n";
			Sleep(3098);
			cout<<"[E]-SystemError: "<<strerror(2)<<"\n";
			Sleep(1503);
			cout<<"The Boot File Could Not Be Found";
			Sleep(1902);
			cout<<"\nEnter Any Value To Exit..\n>>>";
			cin>>opi;
			cout<<"The Program Has Ended With Return Value Of "<<opi<<"\n";
			system("pause");
			return opi+0x000000017;
		}else{
			cout<<"The File Has Been Found!\n";
			Sleep(790);
			cout<<"Please Wait For \"Winter System Booter\" To Load The Files.";
			Sleep(1200);
			cout<<".";
			Sleep(1200);
			cout<<".";
			Sleep(1200);
			cout<<".";
			Sleep(1200);
			cout<<".";
			Sleep(1200);
			cout<<".";
			Sleep(1200);
			cout<<".";
			Sleep(298);
			system("cls");
			while(true){
				system("cls");
				cout<<"WINTER SYSTEM BOOTER\n-------------------------\nBoot:\"WinterSystem\"\n";
				cout<<"-------------------------\nEnter Boot Command...\n--------\n";
				cout<<"\"s\"=NORMALMODE\n\"a\"=Advanced Options\n\"h\"=Return To System Control Pad\n";
				cin>>opc;
				switch (opc) {
				case 's':{
					ofstream start(".\\WinterSystem\\NORMstart");
					start.close();
					Sleep(1000);
					system("C:\\Winter\\WinterSystem\\wintersystem.exe");
					out();
					return opi;
					break;
					}
				case 'a':
					system("Cmd");
					break;
				case 'h':
					break;
				default:
					cout<<"Bad Command!\n";
					Sleep(1000);
					break;
				}
				if(opc=='h'){
					break;
				}
			}
		}
	}
}
