// longestCommonPrefix.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)
		return "";
	vector<string>::iterator it_str=strs.begin();
	vector<string>::iterator next_it_str = it_str + 1;
	string current_str = *it_str;
	string next_str;
	string re_str;
	
	for (int i = 0; i < current_str.size(); i++)
	{
		while (next_it_str != strs.end())
		{
			next_str = *next_it_str;
		
			if (current_str[i] == next_str[i])
			{
				next_it_str++;
			}

			else {

						if(i==0)
					return "";

					else 
						return re_str;
			}
	}
		re_str.push_back(current_str[i]);
		next_it_str = it_str + 1;
	
	}
	return re_str;
}
int main()
{
	string results;

	vector<string> str = {};
	cout << str.size();
	results = longestCommonPrefix(str);
	cout << results << endl;
    return 0;
}

