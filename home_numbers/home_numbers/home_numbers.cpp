// home_numbers.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;
const long long mod = 1e9 + 7;

int main() {
	long long p[1001], dp[1001], n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> p[i];
	for (int i = 1; i <= n; ++i)
	cout << p[i] << ends;
}
