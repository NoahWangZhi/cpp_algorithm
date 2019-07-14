// fournumbersum18.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums, int start, int target) {
	if (nums.back() * 3 < target) return {};
	int i = start, left, right, sub;
	vector<vector<int>> out;
	while (i < nums.size() - 2 && nums[i] * 3 <= target) {
		left = i + 1;
		right = nums.size() - 1;
		sub = target - nums[i];
		while (left < right && nums[left] * 2 <= sub && nums[right] * 2 >= sub) {
			int cur = nums[left] + nums[right];
			if (cur < sub) {
				while (left < right && nums[left] == nums[++left]);
			}
			else if (cur > sub) {
				while (left < right && nums[right] == nums[--right]);
			}
			else {
				out.push_back({ nums[i],nums[left],nums[right] });
				while (left < right && nums[left] == nums[++left]);
				while (left < right && nums[right] == nums[--right]);
			}
		}
		while (i < nums.size() - 1 && nums[i] == nums[++i]);
	}
	return out;
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	if (nums.size() < 4) return {};
	sort(nums.begin(), nums.end());
	if (nums.back() * 4 < target) return {};
	vector<vector<int>> out;

	int i = 0;
	while (i < nums.size() - 3 && nums[i] * 4 <= target) {
		vector<vector<int>> temp = threeSum(nums, i + 1, target - nums[i]);
		for (int k = 0; k < temp.size(); ++k)
			temp[k].push_back(nums[i]);
		out.insert(out.end(), temp.begin(), temp.end());
		while (i < nums.size() - 1 && nums[i] == nums[++i]);
	}
	return out;
}

int main()
{
	vector<int> nums = { 1, 0, -1, 0, -2, 2 };
	vector<vector<int>> rem = fourSum(nums, 0);
	for (int i = 0; i < rem.size(); i++) {
		for (int j = 0; j < rem[i].size(); i++) {
			cout << rem[i][j]<<" ";
		}
		 }
}