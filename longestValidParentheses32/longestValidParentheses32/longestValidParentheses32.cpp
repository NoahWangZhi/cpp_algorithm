// longestValidParentheses32.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestValidParentheses(string s) {
	vector<char> stack;
	string res;
	int len = s.size();
	int reallen=0;
	int result1=0; 
	int result2 = 0;     
	int flag=0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '('&&!stack.empty()) {
			stack.push_back(s[i]);
		}
		else if (s[i] == ')' && !stack.empty() && stack.back() == '(') {
			while (s[i] == ')' && !stack.empty() && stack.back() == '(') {
				res.push_back(stack.back());
				reallen = reallen + 2;
				stack.pop_back();
				if (reallen > result1)
				{
					result1 = reallen;
				}
				i++;
			}
			if (!stack.empty()) {
				reallen = 0;
			}
			
		}
		else if (stack.empty() ) { 
			stack.push_back(s[i]);
			reallen = 0;
		}
		else {
			stack.push_back(s[i]);
			reallen = 0;
		}
	}
	return result1;
}

int main()
{
	string s("()()");
	cout << longestValidParentheses(s) << endl;
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
