/*
Задача 9. На вход дано целое положительное число N. Выведите его в двоичной системе
счисления без ведущих нулей.
*/

#include <iostream>
#include <vector>
using namespace std;

int z9() {
	// Десятичное число на входе.
	int number;
	// Основание системы счисления, 
	int	radix = 2;
	// Остаток от деления.
	int remainder = 1;
	// Число в двоичной системе счисления.
	vector<int> binNumber;
	cin >> number;
	do {
		remainder = number % radix;
		number /= radix;
		binNumber.push_back(remainder);
	} while (number >= radix);

	binNumber.push_back(number);

	for (int i = binNumber.size() - 1; i >= 0; i--) {
		cout << binNumber[i];
	}
	
	return 0;
}
