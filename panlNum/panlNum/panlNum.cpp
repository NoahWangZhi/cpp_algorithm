// panlNum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


bool isPalindrome(int x) {
	if (x < 0)
		return false;
	if (x == 0)
		return true;

	char num[10] = {};
	char len = 0;
	int low_num;
	int temp = x;
	while (temp != 0)
	{
		low_num = temp % 10;
		temp = temp / 10;
		num[len++] = low_num;
	}
	if (len == 1)
		return true;
	int mid_len = len / 2;
	if (len % 2 == 1)
	{
		int j = 1;

		while (num[mid_len - j] == num[mid_len + j]) {
			j++;
			if (mid_len - j + 1 == 0)
				return true;
		}
	}

	if (len % 2 == 0)
	{
		int j = 1;
		while (num[mid_len - j] == num[mid_len + j - 1]) {
			j++;
			if (mid_len - j + 1 == 0)
				return true;
		}
	}
	return false;
}

int main()
{

	bool value;
	value = isPalindrome(123454321);
	cout << value << endl;
    return 0;
}

