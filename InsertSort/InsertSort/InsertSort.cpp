// SelectSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
string str;

using namespace std;

#define len 8
int num[len] = { 5,7,3,2,1,8,6,4 };

void InsertSort(int *arr, int length)
{
	int temp;
	for (int i = 0; i < length ; i++)
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				for (int n = i; n > j; n--)
					arr[n] = arr[n - 1];
				arr[j] = temp;
			}
		}

}

int main()
{
	InsertSort(num, len);
	for (int i = 0; i < len; i++)
		cout << num[i] << ends;
	return 0;
}

