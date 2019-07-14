// telenumber17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
vector<string> get( int i,string &digits, vector<string> &result, string &com);

map<char, string> number{ {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"} };
vector<string> letterCombinations(string digits) {
	int len = digits.size();
	vector<string> result;
	string com;
	int start = 0;
	return get(start,  digits, result, com);
}

vector<string> get(int i, string &digits, vector<string> &result, string &com) {
	if (i >digits.size() )
		return result;
		for (int j = 0; j < number[digits[i]].size(); j++)
		{
			com.push_back(number[digits[i++]][j]);
			get(i, digits, result, com);
			if (com.size() == digits.size()) {
				result.push_back(com);
			}
			--i;
			com.pop_back();
	}
	return result;
}

int main()
{
	string ss = "235";
	vector<string> remain;
	remain=letterCombinations(ss);
	for (int i = 0; i < remain.size(); i++)
		cout << " " << remain[i];
    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
