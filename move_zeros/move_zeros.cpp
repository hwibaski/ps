#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
	// 0이 아닌 숫자를 가리키기 위한 포인터 변수 (메모리 포인터 아님)
	int wIdx = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			swap(nums[wIdx], nums[i]);
			wIdx++;
		}

	}

}
int main() {
	vector<int> v = {0, 1, 2, 0 , 5, 6};
	moveZeroes(v);

	for(int e : v) {
		cout << e << endl;
	}

	return 0;
}