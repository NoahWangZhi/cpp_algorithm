// soccer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string str;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> str;
		if (str.length() == 0)
			return false;
		for (int i = 0; i < str.length() - 3; i++) {
			if (str[i] == str[i + 2]) {
				for (int j = i; j < str.length() - 1; j++) {
					str[j] = str[j + 1];
				}
			}
		}
		for (int i = 0; i < str.length() - 4; i++) {
			if (str[i] == str[i + 1] && str[i + 2] == str[i + 3]){

				for (int j = i + 2; j < str.length() - 1; j++) {
					str[j] = str[j + 1];
				}
		}
	}
	for (int i = 0; i < str.length() - 6; i++) {
		if (str[i] == str[i + 1] && str[i + 2] == str[i + 3] && str[i + 4] == str[i + 5]) {
			for (int j = i + 2; j < str.length() - 1; j++) 
			{
				str[j] = str[j + 1];
			}
		}
	}
		cout << str << endl;
	}
	return 0;
}