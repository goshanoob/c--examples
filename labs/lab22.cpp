#include <cmath>
#include <iostream>
using namespace std;

void z2_00() {
	double xn, xk, dx;
	double precision;
	const int maxIteration = 500;
	xn = 1; xk = 5; dx = 0.5; precision = 0.000001;
	for (double x = xn; x <= xk; x += dx) {
		double term = x, y = 0;
		int n = 1;
		while (precision > term) {
			term *= -x * x / (2 * n * (2 * n + 1));
			y += term;
			n++;
			if (n >= maxIteration) {
				break;
			}
		}
		cout << y << " " << xn << " " << n << endl;
	}
}
