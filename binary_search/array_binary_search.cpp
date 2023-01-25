#include <iostream>
#include <vector>
using namespace std;

int a(vector<int> nums, int target) 
{
	cout << nums.size() << endl;
	unsigned long left = 0;
	unsigned long right = nums.size() - 1;


	while(left <= right)
	{
		int pivot = (left + right) / 2; // 2
		if (nums[pivot] == target){ // nums[2] == target이면 
			return pivot;
		}
		else if ( nums[pivot] < target) {
			left = pivot + 1;
		}
		else {
			right = pivot - 1;
		}
	}
	return -1;
}


int main() {
	std::vector<int> v = {1,3,5,6,7};

	int answer = a(v, 5);

	cout << answer << endl;

	
	return 0;
}