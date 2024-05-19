/*

ERRID:
Main(WinterSystem):1;
Apps(ep:Calculator):2;
Test/Other:-1;
Boot(WinterStsremBooter):0
Unknown:-2147483648
U?k!ow????:2147483647

ERRTYPE:
User input error:1
Other:2
Unknown:-2147483648
U?k!ow????:2147483647

*/

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
void print(int ID,int TYPE){
	switch (ID) {
	case 1:
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		Sleep(610);
		cout<<"┌-------ERROR!-------┐";
		Sleep(610);
		SetColorAndBackground(7,7);
		SetColorAndBackground(0,0);
		cout<<"\n              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|There was an error w|";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|ith WinterSystem.   |";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|CauseBy:User input e|";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|rror                |";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|Press \"Ctrl+C\" to ex|";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"|it.                 |";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		SetColorAndBackground(7,12);
		cout<<"└--------------------┘";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<" \n";
		Sleep(610);
		SetColorAndBackground(0,0);
		cout<<"              ";
		Sleep(610);
		cout<<" ";
		Sleep(610);
		SetColorAndBackground(7,7);
		cout<<"                      \n";
		Sleep(610);
		
		SetColorAndBackground(7,0);
		break;
	case 2:
		//TODO
		break;
	default:
		//TODO
		break;
	}
}
bool ERROR_EXIT(int ERRID,int ERRTYPE){
	switch (ERRID) {
	case 1:
		print(1,1);
		break;
	case 2:
		//TODO
		break;
	default:
		//TODO
		break;
	}
}
