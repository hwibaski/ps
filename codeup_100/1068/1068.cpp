#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> a;

	if (a >= 90 && a <= 100) {
		cout << "A" << '\n';
	}

	if (a >= 70 && a <= 89) {
		cout << "B" << '\n';
	}

	if (a >= 40 && a <= 69) {
		cout << "C" << '\n';
	}

	if (a >= 0 && a <= 39) {
		cout << "D" << '\n';
	}
	
	return 0;
}