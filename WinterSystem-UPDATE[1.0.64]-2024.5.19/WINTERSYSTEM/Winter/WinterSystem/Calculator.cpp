/*
	Winter System Apps
	Name: Calculator
	Copyright: GLEN INC.
	Author: Glen
	Update Date: 17/02/24 17:46
	Version: 1.0.5
*/
#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include "ERR.h"
using namespace std;
int main (){
	char o;
	long long a,b;
	for ( ; ; ){
		system("cls");
		Sleep(1000);
		cout<<"Winter System\n-------------------------\nCalculator Control Pad\n-------------------------\n>>Enter Command...\n\"s\"=Start The Calculation\n\"q\"=Exit\n";
		cin>>o;
		if(int(o)==115){
			system("cls");
			cout<<"Winter System\n-------------------------\nCalculating\n-------------------------\n>>Enter The Calculation To Calculate...\n----------\nCalculation Format: \n[First Number]  [Operator]  [Second Number] \nExample: 2 + 1\n* Note: \nThere Must Be One Space Between Each Item\n";
			if(!(cin>>a>>o>>b))
			{
				if( cin.bad() || cin.eof() ) // 出现故障 或 用户不想输入了
					return 0; // 
				
				cin.clear(); // 清除错误标识
				cin.ignore( std::numeric_limits<streamsize>::max(), '\n' ); // 清除错误行
				ERROR_EXIT(1,1);
				system("pause");
				return 0;
			}
			switch (o) {
				case '+':
					cout<<"Answer="<<a+b;
					break;
				case '-':
					cout<<"Answer="<<a-b;
					break;
				case '*':
					cout<<"Answer="<<a*b;
					break;
				case '/':
					cout<<"Answer="<<a/b;
					break;
				default:
					cout<<"Bad Operator,The System Will Return To \"Calculator Control Pad\"";
					break;
			}
			Sleep(2000);
		}else if(int(o)==113){
			return 0;
		}else{
			cout<<"Bad Command";
		}
	}
}
