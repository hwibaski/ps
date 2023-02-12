#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int h, b, c, s;

	cin >> h >> b >> c >> s;
	unsigned int total = h * b * c * s;
	double fileSize = 0;

	fileSize = total / (double)8 / pow((double)1024, 2.0);
	cout.precision(1);

	cout << fixed << fileSize << " MB" << '\n';
	return 0;
}