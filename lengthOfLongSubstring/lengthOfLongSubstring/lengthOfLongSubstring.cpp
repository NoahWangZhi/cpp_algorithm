// lengthOfLongSubstring.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int lengthOfLongSubstring(string str) {
	set<char> substring;
	int index = 0; 
	int maxlength = 0;
	int repeatindex =0;
	while (index < (int)str.size()) {
		if (substring.find(str[index]) == substring.end()) {
			substring.insert(str[index++]);
				maxlength = max(maxlength, (int)substring.size());
		}
		else
		{
			substring.erase(str[repeatindex++]);
		}
  	}
	return maxlength;
}
int main()
{
	int length = lengthOfLongSubstring("pwwkew");
    return 0;
}

