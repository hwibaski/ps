#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cin >> s;

	unsigned int idx = 0;

	while(idx < s.length()) {
		if (s.at(idx) == '-') {
			idx++;
			continue;
		}

		cout << s.at(idx);
		idx++;
	}

	// c style 1)
	// int f, d;
    // scanf("%d-%d", &f, &d);
    // printf("%06d%07d", f, d);

    // c style 2)

    // char str[14];
    // scanf("%s", str);

    // for (int i = 0; i < 14; i++)
    // {
    //     if (str[i] == '-') continue;
    //     printf("%c", str[i]);
    // }

	return 0;
}