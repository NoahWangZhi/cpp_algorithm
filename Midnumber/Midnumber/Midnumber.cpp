// Midnumber.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <iomanip>
using namespace std;


double empty_num(vector<int> & nums) {
	int lenNums = nums.size();
	vector<int>::iterator it = nums.begin();
	for (int i = 0; i < (lenNums - 1) / 2; i++)
	{
		nums.pop_back();
	}
	if(lenNums%2 !=0 )
	{ 

		return nums.back();
	}
	else {
		double lastvalue = nums.back();
		nums.pop_back();
		double value = nums.back();

		return (lastvalue + value) / 2;
	}
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	int len = nums1.size() + nums2.size();
	vector<int> nums3 = {};
	vector<int>::iterator it1 = nums1.begin();
	vector<int>::iterator it2 = nums2.begin();
	vector<int>::iterator it3;

	if (nums1.empty())
	{
		return  empty_num(nums2);

	}
	if (nums2.empty())
	{
		return  empty_num(nums1);
	}

	for (int i = 0; i < len/2+1; i++) {
	 if (it1!=nums1.end()  && it2  != nums2.end())
		{
		if (*it1 < *it2) {
			nums3.push_back(*it1);
			it1++;
		}
		else
		{
			nums3.push_back(*it2);
			it2++;
		}
		}
	else {
			if (it1 == nums1.end()) {
				nums3.push_back(*it2);
				it2++;
			}
			else {
				nums3.push_back(*it1);
				it1++;
			}
		}
	
}
	int len3 = nums3.size();

	double end_value = nums3.back();
 if (len % 2 == 0)
	{
		nums3.pop_back();
		 double itlastend = nums3.back();
		return (end_value + itlastend) / 2;

	}
	else {
		return end_value;
	}

}

int main()
{
	vector<int> num1 = {1,2};
	vector<int> num2 = {3,4};
	double value = findMedianSortedArrays(num1, num2);
	cout << fixed << setprecision(1) << value << endl;
    return 0;
}

