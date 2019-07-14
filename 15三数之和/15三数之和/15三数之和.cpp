// 15三数之和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> result;
		int nums_len = nums.size();
		int left, right, dif;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums_len - 2; i++)
		{
			if (nums[i] > 0) break;
			if (i > 0 && nums[i - 1] == nums[i]) continue;
			left = i + 1;
			right = nums_len - 1;
			dif = -nums[i];

			while (left < right)
			{
				if (nums[left] + nums[right] == dif)
				{
					result.push_back({ nums[i], nums[left], nums[right] });
					++left;
					while (left < right && nums[left - 1] == nums[left]) ++left;
					--right;
				}
				else if (nums[left] + nums[right] < dif)
				{
					++left;
				}
				else
				{
					--right;
				}
			}
		}
		return result;
}
int main()
{
	vector<int> num={ -1, 0, 1, 2, -1, -4 };
	
	threeSum(num);
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
