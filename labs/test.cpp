#include <iostream>
#include <cmath>
using namespace std;
void test() {
	const int MaxIter = 500; // максимально допустимое количество итераций
	double x, eps;
	cout << "\nВведите аргумент и точность:\n";
	cin >> x >> eps;
	bool done = true; // признак достижения точности
	double ch = x, y = ch; // первый член ряда и начальное значение суммы
	for (int n = 0; fabs(ch) > eps; n++) {
		ch *= x * x / ((2 * n + 2) / (2 * n + 3)); // очередной член ряда
		y += ch; // добавление члена ряда к сумме
		if (n > MaxIter) {
			cout << "\nРяд расходится!";
			done = false; break;
		}
	}
	if (done) cout << "\nЗначение функции: " << y << " для х = " << x << endl;
}