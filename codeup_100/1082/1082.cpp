#include <iostream>
using namespace std;

int main() {
	int a;

	cin >> hex >> a;

	for (int i = 1; i < 16; i++) {
		cout << uppercase << hex << a << "*" << uppercase << hex << i << "=" << i*a << '\n';
	}

	return 0;
}