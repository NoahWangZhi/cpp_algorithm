// longestPalindrome.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string longestPalindrome(string s) {
	string subs;
	if (s.size()==0 || s.size() == 1)
		return s;
	int lens = s.length();
	int center;
	int palLensone=0;
	int palLenstwo=0;
	int start;

	for (int i = 0; i < lens; i++)
	{
		if (s[0] == s[1])
			if (s[i + 2] != s[0]) {
				return   s.substr(0, i + 2);
			}
	}
	for (int i = 0; i < lens; i++)
	{		
		 if (s[i] == s[i + 1]) {
			start = center = i;
			for (int j = 1; center - j >= 0; j++)
			{
				if (s[center - j] == s[center + j + 1]) {
					palLenstwo = j;
					if (palLenstwo > palLensone) {
						palLensone = palLenstwo;
						start = center - j;
					}
				}

			}
			return s.substr(start, 2 * palLenstwo + 2);
		}
		else if (s[i] == s[i + 2]) {
			center = i + 1;
			for (int j = 1; center - j >= 0; j++)
			{
				if (s[center - j] == s[center + j]){
					palLenstwo = j;
					if (palLenstwo > palLensone) {
						palLensone = palLenstwo;
						start = center - j;
					  }
				}
		
			}
			return s.substr(start, 2 * palLenstwo + 1);
		}
		
		
		
	}
	 return s.substr(0, 1);
}

int main()
{
	string str = "abacab";
	string strsub;
	strsub = longestPalindrome(str);
	cout << strsub << endl;
    return 0;
}

