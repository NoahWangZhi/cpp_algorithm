// kthlargenumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
using namespace std;
vector<int> A = { 1, 2, 3, 4 };
vector<int> B = { 2, 4, 5, 6 };
 

vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
	// write your code here
	unsigned  int i = 0;
	unsigned  int j = 0;
	vector<int> C;
	while (i < A.size() && j < B.size())
	{
		if (A[i] <= B[j])
			C.push_back(A[i++]);
		else
			C.push_back(B[j++]);
	}
	while (i < A.size())
	{
		C.push_back(A[i++]);
	}
	while (j < B.size())
	{
		C.push_back(B[j++]);
	}
	return C;
}

int main(){
	vector<int> D;
	D = mergeSortedArray(A, B);
	for (unsigned  int i = 0; i<D.size(); i++)
		cout << D[i] << ends;

    return 0;
}

