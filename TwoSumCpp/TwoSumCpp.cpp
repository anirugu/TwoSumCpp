// TwoSumCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	int skip = 0;
	for (int i = 0; i < nums.size(); i++) {
		auto current = nums[i];
		auto remainder = target - current;
		auto result = find(nums.begin() + i + 1, nums.end(), remainder);
		if (result != nums.end())
		{
			int index2 = result - nums.begin();
			return  vector<int>{ i + skip, index2 + skip };
		}
		else {
			// Remove the item from start
			nums.erase(nums.begin());
			skip++;
			i--;
		}
	}
	return vector<int>{};
}

int main()
{
	std::cout << "Hello World!\n";
	vector<int> vect{ 3,2,4 };
	twoSum(vect, 6);
}
/*
#1 For loop and find the remainder
#2 Every time in loop when result not found, remove the item and add a skip++. this way we don't need to loop in all elements again
*/
