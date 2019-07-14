// pipeikuohao.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "stack"
#include "string"

using namespace std;

int main()
{
	string str("(])");
	stack<char> strm;
	for (int i = 0; i < str.size(); i++)
	{
		if (strm.size() == 0) {
			if (str[i] == ')' || str[i] == ']' || str[i] == '}')
				return false;
		}
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			strm.push(str[i]);
		if (str[i] == ')' || str[i] == ']' || str[i] == '}')
		{
			if (str[i] == ')')
			{
				if (strm.top() == '(')
				{
					strm.pop();
				}
				else
				{
					strm.push(str[i]);
				}
			}
			else if (str[i] == ']')
			{
				if (strm.top() == '[')
				{
					strm.pop();
				}
				else
				{
					strm.push(str[i]);
				}
			}
			else if (str[i] == '}')
			{
				if (strm.top() == '{')
				{ 
					strm.pop();
				}
				else
				{
					strm.push(str[i]);
				}
			}
			
		}
		
	}
			
	if (strm.size() == 0)
		return true;
	else
		return false;
}

