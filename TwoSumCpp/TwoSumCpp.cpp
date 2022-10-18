// TwoSumCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		auto current = nums[i];
		auto remainder = target - current;
		auto result = find(nums.begin() + i + 1, nums.end(), remainder);
		if (result != nums.end())
		{
			int index2 = result - nums.begin();
			return  vector<int>{ i, index2 };
		}
	}
	return vector<int>{};
}

int main()
{
	std::cout << "Hello World!\n";
	vector<int> vect{ 2, 7, 11, 15 };
	twoSum(vect, 9);
}

