/*
Задача 2. 
*/

#include <cstdio>
#include <cmath>

void z2_2_0() {
	// Коорадинаты выстрела.
	double x, y; // 1
	// Радиус окружности.
	double R; // 2
	// Количество выстрелов.
	int k; // 3 
	printf("Введите радиус мишени R: \n"); // 4
	scanf_s("%lf", &R); // 5
	printf("Введите количество выстрелов: \n"); // 6
	scanf_s("%d", &k); // 7
	// Повтороить k раз.
	for (int i = 1; i <= k; i++) { // 8
		printf("Введите координату x выстрела %d: \n", i); // 9
		scanf_s("%lf", &x); // 10
		printf("Введите координату y выстрела %d: \n", i); // 11
		scanf_s("%lf", &y); // 12
		bool condition = x * x + y * y <= R * R; // 13
		// Если точка принадлежит области мишени, сообщить об этом.
		if (condition || y >= -x - 2 && x <= 0 && y <= 0) { // 14
			printf("Выстрел %d попал!\n", i); // 15
		} 
		else // 16
		{
			printf("Выстрел %d не попал\n", i); // 17
		}
	}
}


void z2_2_6() {
	double x, y, R;
	int k;
	printf("Введите радиус мишени R: \n");
	scanf_s("%lf", &R);
	printf("Введите количество выстрелов: \n");
	scanf_s("%d", &k);
	for (int i = 1; i <= k; i++) {
		printf("Введите координату x выстрела %d: \n", i);
		scanf_s("%lf", &x);
		printf("Введите координату y выстрела %d: \n", i);
		scanf_s("%lf", &y);
		bool condition1 = pow(x + R, 2) + pow(y + R, 2) >= R * R;
		bool condition2 = pow(x - R, 2) + y * y <= R * R;
		if (condition1 && x <= 0 && y <= 0 || condition2 && x >= 0 && y >= 0) {
			printf("Выстрел %d попал\n", i);
		}
		else
		{
			printf("Выстрел %d не попал\n", i);
		}
	}
}