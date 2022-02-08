/*
Написать программу вычисления значения функции sin x (синус) с помощью бесконечного ряда Тейлора с точностью ε по формуле.
*/

#include <cstdio>
#include <cmath>
#include <clocale>
using namespace std;

void z2() {
	// Начальное значение аргумента x.
	double xn = 0;
	// Конечное значение аргумента x.
	double xk = 10;
	// Шаг изменения аргумента.
	double dx = 0.5;
	// Точность вычисления функции.
	double precision = 1e-3;
	// Максимально допустимое число членов ряда.
	const int maxTerms = 500;
	// Вывести шапку таблицы.
	printf("   xn   |    y   |   n\n");
	// Перебрать значения аргумента x на отрезке [xn, xk].
	for (double x = xn; x <= xk; x += dx) {
		double term = x, y = x;
		int n = 0;
		do  {
			//term *= -(2 * n - 1) * xn * xn / (2 * n + 1);
			 term *= x * x / ((2 * n + 2) * (2 * n + 3));
			y += term;
			n++;
			if (n >= maxTerms) {
				break;
			}
		} while (abs(term) > precision);
		printf("%8.4lf|%8.4lf|%4d\n", x, y, n);
	}
}