#include <iostream>
using namespace std;

int main() {
	char c;
	char a = 'a';

	cin >> c;


	for (int i = a; i <= (int)c; i++) {
		cout << (char)i << " ";
	}


	return 0;
}