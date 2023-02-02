#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	long sum = a + b + c;
	cout << sum << '\n';
	cout << fixed << setprecision(1) << (float)(sum) / 3; 
	return 0;
}