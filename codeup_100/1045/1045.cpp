#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned int a, b;

	cin >> a >> b;

	cout << a + b<< '\n';
	cout << a - b<< '\n';
	cout << a * b<< '\n';
	cout << a / b<< '\n';
	cout << a % b<< '\n';
	cout <<fixed << setprecision(2) << (double)a / b << '\n';

	return 0;
}