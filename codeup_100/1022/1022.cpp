#include <iostream>
using namespace std;

// cin에 적용된 추출 연산은 공백을 추출할 값이 종료되는 것으로 인식합니다.
// 공백이 포함된 한 줄의 입력된 모든 값을 받으려면 추출 연산자 대신 getline 함수를 사용해야 합니다.

int main() {
	string s;

	getline(cin, s);

	cout << s;

	return 0;
}