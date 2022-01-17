/*
Задача 8. В stdin даны два натуральных числа. Выведите в stdout их наибольший общий делитель
*/

#include <iostream>
#include <vector>
using namespace std;

int z8() {
	int a, b, MGD;
	cin >> a >> b;
	while (true) {
		MGD = b - a;
		if (MGD == a) {
			break;
		}

	}
	cout << MGD;
	return 0;
}


