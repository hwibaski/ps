#include <iostream>
#include <vector>

// sorting은 O n log N 을 가져가야함

struct Employee
{
	int age;
	char name;
};

bool operator< (const Employee& lhs, const Employee& rhs)
{
	return lhs.age < rhs.age;
}

int main() {
	std::vector<Employee> v {
		{200, 'A'},
		{200, 'B'},
		{200, 'C'},
		{200, 'D'},
		{200, 'E'},
	};

	for (int i = 9; i < 100; i++) {
		v.emplace_back(Employee{i, 'Z'});
	}
	// std::stable_sort(v.begin(), v.end());
	std::sort(v.begin(), v.end());

	for (const Employee& e: v) {
		std::cout << e.age << ", " << e.name << std::endl;
	}

	return 0;
}