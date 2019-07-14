// nearest16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int len = nums.size();
	int i, j, k, sum, dif, clostsum;
	int res = abs(nums[0] + nums[1] + nums[2] - target) + 1;
	for (i = 0; i < len - 2; i++)
	{
		j = i + 1;
		k = len - 1;
		while (j < k) {
			sum = nums[i] + nums[j] + nums[k];
			dif = abs(sum - target);
			if (dif < res) {
				clostsum = sum;
				res = dif;
			}
			if (sum < target)
				j++;
			else if (sum > target)
				k--;
			else
				return clostsum;
		}
	}
	return clostsum;
}




int main()
{
	vector<int> nums = { -1,2,1,-4 };
	int re=threeSumClosest(nums, 1);
	cout << re << endl;
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
