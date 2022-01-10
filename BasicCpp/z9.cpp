/*
Задача 9. На вход дано целое положительное число N. Выведите его в двоичной системе
счисления без ведущих нулей.
*/

#include <iostream>
#include <vector>
using namespace std;

int z9() {
	// Десятичное число, основание системы счисления, остаток от деления.
	int number, radix = 2, remainder = 1;
	// Число в двоичной системе счисления.
	vector<int> binNumber;
	cin >> number;
	do {
		remainder = number % radix;
		number /= radix;
		binNumber.push_back(remainder);
	} while (remainder >= radix);

	for (auto number : binNumber) {
		cout << number;
	}
	

	return 0;
}
