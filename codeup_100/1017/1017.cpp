#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			cout << a;
			break;
		}
		cout << a << ' ';
	}
	return 0;
}