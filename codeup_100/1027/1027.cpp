#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a;
	cin.ignore(50, '.');

	cin >> b;
	cin.ignore(50, '.');

	cin >> c;

	cout.width(2);
	cout.fill('0');
	cout << c;

	cout << "-";

	cout.width(2);
	cout.fill('0');
	cout << b;

	cout << "-";

	cout << a;


	return 0;
}