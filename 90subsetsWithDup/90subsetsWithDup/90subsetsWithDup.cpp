// 90subsetsWithDup.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> ans;
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<int> tmp;
		dfs(nums, 0, tmp);
		return ans;
	}

	void dfs(vector<int> &nums, int start, vector<int> &tmp) {
		ans.push_back(tmp);

		for (int i = start; i < nums.size(); ++i) {
			if (i > start  && nums[i] == nums[i - 1])
				continue;
			tmp.push_back(nums[i]);
			dfs(nums, i + 1, tmp);
			tmp.pop_back();
		}
	}
};
int main()
{

	const char* s = "AAA"; //1
	printf("%s", s); //2
	s[0] = 'B'; //3
	printf("%s", s); //4
	vector<int> num = { 1, 2 , 2 };
	vector<vector<int>> rest;
	Solution  solution;
	rest = solution.subsetsWithDup(num);
    std::cout << "Hello World!\n"; 
}
