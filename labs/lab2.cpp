/*
Написать программу вычисления значения функции sin x (синус) с помощью бесконечного ряда Тейлора с точностью ε по формуле.
*/

#include <iostream>
#include <cmath>
using namespace std;

void z2() {
	double xn = 0;
	double xk = 10;
	double dx = 0.5;
	double precision = 1e-3;
	cout << "   y    |   xn   |   n   " << endl;
	for (double xn = 0; xn <= xk; xn += dx) {
		double y = 0;
		int n = 1;
		double term = 1;
		
		do  {
			term *= -(2 * n - 1) * xn * xn / (2 * n + 1);
			y += term;
			n++;
			if (n > 500) {
				break;
			}
		} while (abs(term)  > precision);

		cout << y << "   |   " << xn << "   |   " << n << endl;
	}
}