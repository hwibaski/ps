#include <iostream>
using namespace std;

int main() {
	int a;
	int result = 0;

	cin >> a;

	for (int i = 0; i <= a; i++) {
		if (i % 2 == 0) {
			result += i;
		}
	}

	cout << result;
	return 0;
}