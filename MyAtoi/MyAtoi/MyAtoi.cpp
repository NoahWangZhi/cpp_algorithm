// MyAtoi.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int  main()
{
	string str("2147483648");
	long long results = 0;
	int i = 0;
	bool flag = false;
	int num=0;
	while (i < str.length()) {
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-')
		{
			i++;
			num++;
			flag = true;
		}
		while (str[i] <= '9' && str[i] >= '0') {
			results = (results * 10) + str[i] - '0';
			i++;
			num++;
			if (results >= 2147483648 && flag == true && num > 9)
				return  -2147483648;
			if (results >= 2147483648 && flag == false && num > 9)
				return  2147483647;
		}
		
	}
	return results*(flag ? -1 : -1);
}

