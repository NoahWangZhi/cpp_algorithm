// cvte.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

vector<string>& reverse(vector<string>& word) {
	int length = word.size();
	cout << length << endl;
	string temp;
	vector<string>::iterator iter = word.begin();
	vector<string>::iterator iter_end = word.end() - 1;
	while (iter != iter_end)
	{
		temp = *iter;
		*iter++ = *iter_end;
		*iter_end-- = temp;
		

	}
	return word;
}


int main() {
	
	string str;
	vector<string> word;
	vector<string> result;
	while (cin >> str)
	{
		word.push_back(str);      //push_back()用于添加元素到word的尾端

	}
	result = reverse(word);

	vector<string>::iterator iter;

	for (iter = result.begin(); iter != result.end(); iter++)
				cout << *iter << ends;
	cout << endl;
}


/*int main() {

//string str;

string str[3] = {"welcome", "to", "cvte."};
int length = 3;
string temp;
for (int i = 0; i<length / 2; i++)
{
temp = str[i];
str[i] = str[length - i - 1];
str[length - i - 1] = temp;
}
for (int i = 0; i< 3; i++) {
cout << str[i] << ends;
}


}
*/