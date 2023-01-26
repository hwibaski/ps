#include <iostream>
using namespace std;


//cin.ignore(10000,'\n');
// 버퍼에서 10000자를 가져 오지만 개행 (\ n)이 있으면 중지됩니다. 10000은 일반적인 큰 값입니다.

int main() {
	int year, month, day;
	cin >> year; // 2023.1.25\n 에서 int가 아닌 .을 만나기 전까지의 2023을 year에 할당, '\n을 안만났으니 버퍼에 아직 값이 남아있으므로 cin으로 값 추출 가
	cin.ignore(50, '.'); // year는 이미 할당했으니 첫 번째 . 앞까지의 값을 버퍼에서 지운다.

	cin >> month; // 1.25에서 1을 할당
	cin.ignore(50, '.'); // month는 이미 할당했으니 두 번째 . 앞까지의 값을 버퍼에서 지운다.

	cin >> day;

	cout.width(4); // 출력되는 폭을 4로 지정
	cout.fill('0'); // 공백은 문자0으로 채움
	cout << year << '.';

	cout.width(2);
	cout.fill('0');
	cout << month << '.';

	cout.width(2);
	cout.fill('0');
	cout << day << endl;

	// c style
	// int y,m,d ;
    // scanf("%d.%d.%d",&y,&m,&d);
    // printf("%.4d.%.2d.%.2d",y,m,d);


	return 0;
}