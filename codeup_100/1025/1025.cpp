#include <iostream>
using namespace std;

// 아스키 코드를 이용하여 '0'을 빼주면 문자를 정수로 쉽게 바꿀 수 있다.

int main() {
	char num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	
	cout << '[' << (num[0] - '0') * 10000 << ']' << endl;
	cout << '[' <<  (num[1] - '0') * 1000 << ']' << endl;
	cout << '[' << (num[2] - '0') * 100 << ']' <<endl;
	cout << '[' << (num[3] - '0') * 10 << ']' << endl;
	cout << '[' << (num[4] - '0') * 1 << ']' << endl;
}