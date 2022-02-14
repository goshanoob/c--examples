/*
Задача 1. Вычислите значения функции, заданной с помощью ряда Тейлора, на интервале от xn до xk с шагом dx с точностью precision.
Результаты вычислений выведите на консоль в табличном формате.Таблица должна содержать шапку.Каждая строка должна содержать значение аргумента,
значение функции и количество просуммированных членов ряда.
*/

#include <cstdio>
#include <cmath>
#include <clocale>
#include <string>
using namespace std;

// Получить факториал числа.
long double fact(int N)
{
	if (N < 0)
	{
		return 0;
	}
	if (N == 0) {
		return 1;
	}		
	else
	{
		return N * fact(N - 1);
	}
}

void z2_0() {
	// Начальное значение аргумента x.
	double xn = -5; // 1
	// Конечное значение аргумента x.
	double xk = 5; // 2
	// Шаг изменения аргумента.
	double dx = 1; // 3
	// Точность вычисления функции.
	double precision = 1e-6; // 4
	// Максимально допустимое число членов ряда.
	const int maxTerms = 500; // 5
	// Вывести шапку таблицы.
	printf("  xn  |    y   |  n | sin(x) |  test\n"); // 6
	// Перебрать значения аргумента x на отрезке [xn, xk].
	for (double x = xn; x <= xk; x += dx) { // 7
		// Очередной член ряда и накопленная сумма.
		double term = x, y = x; // 8
		// Переменная для тестирования по общей формуле суммы.
		double test = 0;
		// Номер члена ряда.
		int n = 1; // 9
		// Признак сходимости ряда.
		bool isСonvergent = true; // 10
		do  { // 11
			// Вычислить очередной член ряда по общей формуле.
			test += pow(-1, n - 1) * pow(x, 2 * n - 1) / fact(2 * n - 1); // 12
			// Вычислить очередной член ряда по рекуррентной формуле.
			term *= -x * x / 2 / n / (2 * n + 1); // 13
			// Добавить член ряда к общей сумме.
			y += term; // 14
			// Увеличить номер члена ряда для следующей итерации.
			n++; // 15
			// Если число членов ряда превысило допустимое количество, прервать цикл и считать ряд расходящимся.
			if (n >= maxTerms) { // 16
				isСonvergent = false; // 17
				break; // 18
			}
			// Повторять цикл, пока  модуль члена ряда превышает погрешность вычисления.
		} while (precision < abs(term)); // 19
		// Если ряд сходится вывести вывести полную строку таблицы, иначе - вывести в столбце y прочерк.
		if (isСonvergent) { // 20
			printf("%6.2lf|%8.4lf|%4d|%8.4lf|%8.4lf\n", x, y, n, sin(x), test); // 21
		}
		else // 22
		{
			printf("%6.2lf|    -   |%4d|%8.4lf|%8.4lf\n", x, n, sin(x), test); // 23
		}
	}
}

void z2_2() {
	double xn = 0.1;
	double xk = 10;
	double dx = 0.1;
	double precision = 1e-6;
	const int maxTerms = 500;
	string xs = "", ys = ""; 
	for (double x = xn; x <= xk; x += dx) {
		double term = x, y = 0; 
		int n = 2;
		do {
			y += term;
			term *= -x * sqrt(n) / sqrt(n + 1);
			n++;
			if (n >= maxTerms) {
				break;
			}
		} while (precision < abs(term));
		printf("%8.2lf|%8.4lf|%4d\n", x, y, n);
		xs += to_string(x) + " ";
		ys += to_string(y) + " ";
	}
	printf("%s\n", xs.c_str());
	printf("%s\n", ys.c_str());
}

void z2_4() {
	double xn = -10, xk = 10, dx = 1;
	double precision = 1e-6;
	const int maxTerms = 500;
	printf("    x |    y   | n | cos(x)|  test\n");
	for (double x = xn; x <= xk; x += dx) {
		double test = 0;
		double term = 1, y = 1;
		int n = 0;
		bool isDiverged = true;
		do {
			test += pow(-1, n + 1) * pow(x, 2 * n) / fact(2 * n);
			term *= -x * x / (2 * n + 1) / (2 * n + 2);
			y += term;
			n++;
			if (n > maxTerms) {
				isDiverged = false;
				break;
			}
		} while (precision < abs(term));
		if (!isDiverged) {
			printf("%6.2lf|    -   |%3d\n", x, n);
		}
		else 
		{
			printf("%6.2lf|%8.4lf|%3d|%8.4lf|%8.4lf\n", x, y, n, cos(x), test);
		}
	}
}

void z2_5() {
	double xn = -10, xk = 10, dx = 1;
	double precision = 1e-6;
	const int maxTerms = 500;
	
	printf("    x |    y   | n | sin(x)|  test\n");
	for (double x = xn; x <= xk; x += dx) {
		double test = 0;
		double term = -x*x/6, y = 1;
		int n = 1;
		bool isDiverged = true;
		do {
			test += pow(-1, n + 1) * pow(x, 2 * n - 1) / fact(2 * n - 1);
			term *= -x * x / (2 * n) / (2 * n + 1);
			y += term;
			n++;
			if (n > maxTerms) {
				isDiverged = false;
				break;
			}
		} while (precision < abs(term));
		if (!isDiverged) {
			printf("%6.2lf|    -   |%3d\n", x, n);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%3d|%8.4lf|%8.4lf\n", x, y, n, sin(x), test);
		}
	}
}

void z2_6() {
	double xn = -10, xk = 10, dx = 1;
	double precision = 1e-6;
	const int maxTerms = 500;

	printf("    x |    y   | n | asin(x)\n");
	for (double x = xn; x <= xk; x += dx) {
		double term = x , y = 1;
		int n = 1;
		bool isDiverged = true;
		do {
			term *= -x * x / (2 * n) / (2 * n + 1);
			y += term;
			n++;
			if (n > maxTerms) {
				isDiverged = false;
				break;
			}
		} while (precision < abs(term));
		if (!isDiverged) {
			printf("%6.2lf|    -   |%3d\n", x, n);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%3d|%8.4lf\n", x, y, n, asin(x));
		}
	}
}
/*
void z2_6() {
	// Вариант 6.
	double xn = -2, xk = 2, dx = 0.1;
	double precision = 1e-20;
	const int maxTerms = 500;
	printf("   x  |    y   |  n |  test  \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = x;
		double y = x;
		double n = 2;
		double test = 0;
		bool isNotDevorsed = false;
		do {
			term *= pow(2 * n - 3, 2) * x * x / (2 * n - 2) / (2 * n - 1);
			y += term;
			n++;
			if (n >= maxTerms) {
				isNotDevorsed = true;
				break;
			}
		} while (precision < abs(term));
		if (isNotDevorsed)
		{
			printf("%6.2lf|    -   |%4.0f|%8.4lf\n", x, n, test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%4.0f|%8.4lf\n", x, y, n, test);
		}
	}
}
*/

void z2_7() {
	double xn = -1, xk = 1, dx = 0.1;
	double precision = 1e-6;
	const int maxTerms = 500;

	printf("    x |    y   | n | test \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = -2*x*x, y = 1 + term;
		double n = 3;
		bool isDiverged = true;
		double test = 1 - 2*x*x;
		do {
			test += pow(-1, n - 1) * n * pow(x, n);
			term *= -(n + 1) / n * x;
			y += term;
			n++;
			if (n > maxTerms) {
				isDiverged = false;
				break;
			}
		} while (precision < abs(term));
		if (!isDiverged) {
			printf("%6.2lf|    -   |%3.0lf|%8.4lf\n", x, n-3,test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%3.0lf|%8.4lf\n", x, y, n-3,test);
		}
	}
}

void z2_8() {
	// Вариант 8. Сошлось.
	double xn = -1.5, xk = 1.5, dx = 0.1;
	double precision = 1e-20;
	const int maxTerms = 500;
	printf("   x  |    y   |  n |  test  \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = x;
		double y = term;
		double n = 1;
		double test = 0;
		bool isNotDevorsed = false;
		do {
			test += pow(-1, n + 1) * pow(x, n) / n / n;
			term *= -x * n * n / pow(n + 1, 2);
			y += term;
			n++;
			if (n >= maxTerms) {
				isNotDevorsed = true;
				break;
			}
		} while (precision < abs(term));
		if (isNotDevorsed)
		{
			printf("%6.2lf|    -   |%4.0f|%8.4lf\n", x, n, test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%4.0f|%8.4lf\n", x, y, n, test);
		}
	}
}

void z2_11() {
	// Вариант 11.
	double xn = -1, xk = 3, dx = 0.2;
	double precision = 1e-20;
	const int maxTerms = 500;
	printf("   x  |    y   |  n |  test  \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = 1;
		double y = term;
		double n = 2;
		double test = 0;
		bool isNotDevorsed = false;
		do {
			term *= -(2 * n - 1) * x * x / 2 / n;
			y += term;
			n++;
			if (n >= maxTerms) {
				isNotDevorsed = true;
				break;
			}
		} while (precision < abs(term));
		if (isNotDevorsed)
		{
			printf("%6.2lf|    -   |%4.0f|%8.4lf\n", x, n, test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%4.0f|%8.4lf\n", x, y, n, test);
		}
	}
}


void z2_12() {
	// Вариант 12. Сошлось.
	double xn = -0.4, xk = 0.4, dx = 0.05;
	double precision = 1e-20;
	const int maxTerms = 500;
	printf("   x  |    y   |  n |  test  \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = x;
		double y = term;
		double n = 1;
		double test = 0;
		bool isNotDevorsed = false;
		do {
			test += pow(-1, n + 1) * pow(2, n) * pow(x, n) / (n * n + 1);
			term *= -2 * x * (n * n + 1) / (pow(n + 1, 2) + 1);
			y += term;
			n++;
			if (n >= maxTerms) {
				isNotDevorsed = true;
				break;
			}
		} while (precision < abs(term));
		if (isNotDevorsed)
		{
			printf("%6.2lf|    -   |%4.0f|%8.4lf\n", x, n, test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%4.0f|%8.4lf\n", x, y, n, test);
		}
	}
}

void z2_13() {
	// Вариант 13. Сошлось.
	double xn = -2, xk = 2, dx = 0.1;
	double precision = 1e-20;
	const int maxTerms = 500;
	printf("   x  |    y   |  n |  test  \n");
	for (double x = xn; x <= xk; x += dx) {
		double term = x / 2;
		double y = term;
		double n = 1;
		double test = 0;
		bool isNotDevorsed = false;
		do {
			test += pow(-1, n + 1) * pow(x, n) / pow(2, n) / n;
			term *= -x * n / 2 / (n + 1);
			y += term;
			n++;
			if (n >= maxTerms) {
				isNotDevorsed = true;
				break;
			}
		} while (precision < abs(term));
		if (isNotDevorsed)
		{
			printf("%6.2lf|    -   |%4.0f|%8.4lf\n", x, n, test);
		}
		else
		{
			printf("%6.2lf|%8.4lf|%4.0f|%8.4lf\n", x, y, n, test);
		}
	}
}

void z2_16() {
	// Сошлось.
	double xn = -10, xk = 10, dx = 0.1;
	double precision = 1e-6;
	const int maxTerms = 500;

	printf("    x |    y   | n | test | formula\n");
	for (double x = xn; x <= xk; x += dx) {
		double term = 1, y = 1;
		double n = 1;
		bool isDiverged = true;
		double test = 0;
		do {
			test += pow(-1, n-1) * n * n * pow(x, n-1);
			term *= -pow((n+1)/n, 2) * x;
			y += term;
			n++;
			if (n > maxTerms) {
				isDiverged = false;
				break;
			}
		} while (precision < abs(term));
		if (!isDiverged) {
			printf("%6.2lf|    -   |%3.0lf|%8.4lf|%8.4lf\n", x, n - 3, test, (1 - x) / pow(1 + x, 3));
		}
		else
		{
			printf("%6.2lf|%8.4lf|%3.0lf|%8.4lf|%8.4lf\n", x, y, n - 3, test, (1-x)/pow(1+x, 3));
		}
	}
}