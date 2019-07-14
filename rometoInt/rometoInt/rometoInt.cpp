// rometoInt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int getValue(char c);
int romanToInt(string s) {
	int length;
	int result = 0;
	length = s.size();
	if (length == 0)
		return 0;
	int i ;
	for ( i = 0; i < length; i++)
	{
		if (i == length - 1)
			return getValue(s[i]) + result;
		if(getValue(s[i])>=getValue(s[i+1]))
		{ 
		
		result = getValue(s[i]) + result;
			
		}
	else {
			result = getValue(s[i + 1]) - getValue(s[i]) + result;
			i++;
		}
	}
	return result;

}
int getValue(char c) {
	int value;
	switch (c)
	{
	case 'I':
		value = 1;
		break;
	case 'V':
		value = 5;
		break;
	case 'X':
		value = 10;
		break;
	case 'L':
		value = 50;
		break;
	case 'C':
		value = 100;
		break;
	case 'D':
		value = 500;
		break;
	case 'M':
		value = 1000;
		break;

	default:
		break;
	}
	return value;
}



int main()
{

	int results = 0;
	results = romanToInt("MDCXCV");
	cout << results << endl;
    return 0;
}

