// hebinglianbiao.cpp : �������̨Ӧ�ó������ڵ㡣
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
		for (int i = 0; i < numRows; ++i) {//����
			int x = 0;//����ǰ��
			while (2 * (numRows - 1) * x + i < s.size()) {
				coString.push_back(s[2 * (numRows - 1) * x + i]);
				if (i != 0 && i != numRows - 1 && 2 * (numRows - 1) * x + i + 2 * (numRows - 1) - 2 * i<s.size()) {
					//�ж��������ǵ�һ�к����һ�У��±겻Խ�硣
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
