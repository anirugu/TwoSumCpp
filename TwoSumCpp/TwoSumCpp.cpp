// TwoSumCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
	unordered_map<int, int> vals;
	for (int i = 0; i < nums.size(); i++) {
		const int remainder = target - nums[i];
		auto index = vals.find(remainder);
		if (index != vals.end()) {
			return { i, index->second };
		}
		vals[nums[i]] = i;
	}
	return {};
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
