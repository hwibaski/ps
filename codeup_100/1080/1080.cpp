#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	int result = 0;
	int start = 1;

	while (true) {
		result += start;
		if (result >= a) break;
		start++;

	}

	cout << start << '\n';

	return 0;
}