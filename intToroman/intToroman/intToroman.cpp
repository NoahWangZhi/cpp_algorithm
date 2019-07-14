// intToroman.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

string intToRoman(int num) {

	string str;
	if (num <= 0)
		return "";
	if (num >= 1000) {
		for(int i = 0;i<num/1000;i++)
		{
			str.push_back('M');
		}
		num = num % 1000;
	}
	
	if (num >= 500) {
		if (num / 100 == 9) {
			str.push_back('C');
			str.push_back('M');
		}
		else{
		str.push_back('D');
		for (int i = 0; i<(num-500) / 100; i++)
		{
			str.push_back('C');
		}
		}
		num = num % 100;
	}	

	if(num < 500&& num>=100) {
		if (num / 100 == 4) {
			str.push_back('C');
			str.push_back('D');
		}
		else {
			for (int i = 0; i < num / 100; i++)
			{
				str.push_back('C');
			}
		}
		num = num % 100;
	}
	
	if (num >= 50) {
		if (num / 10 == 9) {
			str.push_back('X');
			str.push_back('C');
		}
		else {
		str.push_back('L');
		for (int i = 0; i < (num - 50) / 10; i++)
		{
			str.push_back('X');
		}
	}
		num = num % 10;
	}
	if (num < 50&&num>=10) {
		if (num / 10 == 4) {
			str.push_back('X');
			str.push_back('L');
		}
		else {
			for (int i = 0; i < num / 10; i++)
			{
				str.push_back('X');
			}
		}
		num = num % 10;
	}
	if (num >= 5) {
		if (num == 9) {
			str.push_back('I');
			str.push_back('X');
		}
		else {
			str.push_back('V');
			for (int i = 0; i < (num - 5); i++)
			{
				str.push_back('I');
			}
		}
	}
	if (num < 5&& num>0) {
		if (num == 4) {
			str.push_back('I');
			str.push_back('V');
		}
		else {
			for (int i = 0; i < num; i++)
			{
				str.push_back('I');
			}
		}
	}
	
	return str;
}

int main()
{
	int m = 40;
	string ss;

	ss = intToRoman(m);
	for (size_t i = 0; i < ss.size(); i++)
	{
		cout << ss[i];
	}
    return 0;
}

