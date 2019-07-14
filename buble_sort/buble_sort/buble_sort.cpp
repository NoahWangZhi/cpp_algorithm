// buble_sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define len  10

int num[len] = {5,7,3,2,1,8,6,4,7,90};


void bubblesort(int *arr, int length)
{
	int temp;
	for (int i = 0; i < length - 1; i++)
		for (int j = 1; j < length - i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			}

}


int main()
{
	bubblesort(num, len);
	for (int i = 0; i < len; i++)
		cout << num[i] << ends;
    return 0;
}

