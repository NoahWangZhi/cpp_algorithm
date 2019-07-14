// hebinglianbiao.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows >= s.size() || numRows == 1)
			return  s;
		string coString;
		for (int i = 0; i < numRows; ++i) {//往下
			int x = 0;//横向前进
			while (2 * (numRows - 1) * x + i < s.size()) {
				coString.push_back(s[2 * (numRows - 1) * x + i]);
				if (i != 0 && i != numRows - 1 && 2 * (numRows - 1) * x + i + 2 * (numRows - 1) - 2 * i<s.size()) {
					//判断条件：非第一行和最后一行，下标不越界。
					coString.push_back(s[2 * (numRows - 1) * x + i + 2 * (numRows - 1) - 2 * i]);
				}
				x++;
			}
		}
		return coString;
	}
};

int main() {
	Solution sf;
	string str = "LEETCODEISHIRING";
	string s1;
	s1= sf.convert(str, 4);
	cout << s1;
	return 0;
}
