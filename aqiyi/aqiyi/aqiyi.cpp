// aqiyi.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stack>
#include <string>


using namespace std;
string dfs(string s);
string decodeString(string s)
{
	return dfs(s);
}

string dfs(string s)
{
	int start = s.find_first_of('[');
	if (start == s.npos)
		return s;
	else
	{
		int i = start, count = 0;
		for (; i < s.length(); i++)
		{
			if (s[i] == '[')
				count++;
			else if (s[i] == ']')
				count--;
			if (count == 0)
				break;
		}
	}
}


int main()
{
	
			string left = s.substr(0, start);
			string cen = s.substr(start + 1, i - start - 1);
			string right = s.substr(i + 1);

			for (i = left.length() - 1; i >= 0; i--)
			{
				if (!(left[i] >= '0' && left[i] <= '9'))
					break;
			}

			int size = stoi(left.substr(i + 1));
			left = left.substr(0, i + 1);
			for (int j = 0; j < size; j++)
				left += cen;

			return dfs(left + right);
}

