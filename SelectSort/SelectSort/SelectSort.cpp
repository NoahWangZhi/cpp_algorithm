// SelectSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define len 8
int num[len] = { 5,7,3,2,1,8,6,4 };

void SelectSort(int *arr, int length)
{
	int temp;
	for (int i = 0; i < length - 1; i++)
		for (int j = i+1; j < length ; j++)
		{
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			}

	
}

int main()
{
	SelectSort(num, len);
	for (int i = 0; i < len ; i++)
		cout << num[i] << ends;
    return 0;
}

