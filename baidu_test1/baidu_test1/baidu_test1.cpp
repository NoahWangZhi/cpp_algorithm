// baidu_test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

vector<string> longestCommonPrefix(string mword, int number, vector<string>& strs) {
	vector<string>::reverse_iterator it_str = strs.rbegin();
	string current_str = mword;
	string str;
	vector<string> re_str;
	int i = 0;
	int j = 0;

	while (it_str != strs.rend())
	{
		i = 0;
		j = 0;
		while (i < current_str.size())
		{
			str = *it_str;
			while (j < str.size()) {

				if (current_str[i] == str[j])
				{
					j++;
					i++;
				}
				else
				{
					i++;
				}

				if (i == current_str.size()) {
					break;
				}
			}
			i = current_str.size();
		}
		if (j == str.size())
		{
			re_str.push_back(str);
		}
		it_str++;
	}
	return re_str;
}


int main()
{
	vector<string> results;
	string stri = "rocksock";
	vector<string> str = { "rocs", "cksok", "roky","sockro" };

	results = longestCommonPrefix(stri, 4, str);
	//cout << results << endl;
	return 0;
}
