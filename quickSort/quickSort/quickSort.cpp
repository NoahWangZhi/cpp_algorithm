// quickSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int *quickSort(int *arr,int left, int right) {
	if (left >= right)
		return arr;
	int temp=0;

	int i = left;
	int j = right;
	
	temp = arr[left];
	while (i != j) {
		while (arr[j] >= temp && i<j) {
			j--;
		}
		while (arr[i] <= temp && i<j)
		{
			i++;
		}
		if(i<j){
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}

		for (int k = 0; k<10; k++)
			cout << arr[k] << ends;
		cout << endl;
	}
	temp = arr[left];
	arr[left] = arr[i];
	arr[i] = temp;
	for (int k = 0; k<10; k++)
		cout << arr[k] << ends;
	cout << endl;
	
	quickSort(&arr[left],left,j);
	cout << "arr[left]=" << arr[left]<<endl;
	cout << "j=" << j <<"i="<<i<<"  arr[i+1]="<<arr[i + 1]<<endl;
	quickSort(&arr[i + 1], i + 1, j);
	return arr;

 }

int main()
{
	int arr[10] = { 6,1,2,7,9,3,4,5,10,8 };
	int *ar1;
	ar1 = quickSort(arr, 0, 9);
	for(int i = 0;i<10;i++)
		cout << ar1[i]<<ends;
	cout << endl;
    return 0;
}

