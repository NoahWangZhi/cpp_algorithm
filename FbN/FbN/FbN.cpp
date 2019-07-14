// FbN.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long long Fibonacci(int n)
{
	int num[2] = { 0,1 };
	if (n < 2)
		return num[n];
	long long numberone = 0;
	long long numbertwo = 1;
	long long  fbnumber = 0;
	for (int i = 1; i < n; i++)
	{
		fbnumber = numberone + numbertwo;
		numberone = numbertwo;
		numbertwo = fbnumber;
	}
	return fbnumber;
}

int main()
{
	long long result;
	result = Fibonacci(5);
	cout << result;
    return 0;
}

