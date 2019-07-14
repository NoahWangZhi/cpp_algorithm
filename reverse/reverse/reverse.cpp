// reverse.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long long reverse(int x) {
	
	if (x == 0 || x >2147483647 || x< -2147483647-1)
		return 0;
	char re_num[32] = {};
	int low_number;
	int temp=x;
	long long result=0;
	int i = 0;
	while (temp != 0) {
		low_number = temp % 10;
		temp = temp / 10;
	    re_num[i] = low_number;
		result = result * 10 + re_num[i++];
		if (result > 2147483647  || result < -2147483647-1)
			return 0;
	}
	
		return result;

}


int main()
{
	int m;

	m = reverse(-321);

	cout << m << ends;
    return 0;
}

