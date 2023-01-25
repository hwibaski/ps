#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// https://leetcode.com/problems/find-pivot-index/

int pivotIndex(vector<int>& nums) {
	int sum = accumulate(nums.begin(), nums.end(), 0);
	int leftSum = 0;
	int rightSum = sum;

	int pastPivotNum = 0;

	for (int i = 0; i < nums.size(); i++) {
		int num = nums[i];
		rightSum = rightSum - num;
		leftSum = leftSum + pastPivotNum;

		if (leftSum == rightSum) {
			return i;
		}
		pastPivotNum = num;

	}
	return -1;
}


int main() {
	vector<int> v = {2, 1, -1};

	int answer = pivotIndex(v);

	cout << answer;
	
	return 0;
}