// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool Poporder(char* pushlist, char* poplist, int len)
{
	if (len <= 0)
		return false;
	char* push_index = pushlist;
	char* pop_index = poplist;
	stack<char> s;
	for (int i = 0; i < len; i++) {
		if (!s.empty() && s.top() == *pop_index) {
			s.pop();
			pop_index++;
		}
		else {
			while ((push_index - pushlist < len) && (*push_index != *pop_index)) {
				s.push(*push_index);
				push_index++;
			}
			if (push_index - pushlist < len && (*push_index == *pop_index)) {
				pop_index++;
			}
			else return false;

		}
	}
	return true;

}
int main() {
	string pushstr;
	string popstr;
	int len;
	int n;
	string result;
	cin >> n;
	cin.ignore();
	while ( n != 0) {
		n--;
		
		getline(cin, pushstr);
		getline(cin, popstr);
		len = popstr.size();
		if (Poporder(&pushstr[0], &popstr[0], len) == true)
			result.push_back('Y');
		else
			result.push_back('N');
	}

	for (int j = 0; j < result.size(); j++)
		cout << result[j] << endl;
	return 0;
}