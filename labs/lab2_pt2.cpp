/*
������ 2. 
*/

#include <cstdio>
#include <cmath>

void z2_2_0() {
	// ����������� ��������.
	double x, y; // 1
	// ������ ����������.
	double R; // 2
	// ���������� ���������.
	int k; // 3 
	printf("������� ������ ������ R: \n"); // 4
	scanf_s("%lf", &R); // 5
	printf("������� ���������� ���������: \n"); // 6
	scanf_s("%d", &k); // 7
	// ���������� k ���.
	for (int i = 1; i <= k; i++) { // 8
		printf("������� ���������� x �������� %d: \n", i); // 9
		scanf_s("%lf", &x); // 10
		printf("������� ���������� y �������� %d: \n", i); // 11
		scanf_s("%lf", &y); // 12
		bool condition = x * x + y * y <= R * R; // 13
		// ���� ����� ����������� ������� ������, �������� �� ����.
		if (condition || y >= -x - 2 && x <= 0 && y <= 0) { // 14
			printf("������� %d �����!\n", i); // 15
		} 
		else // 16
		{
			printf("������� %d �� �����\n", i); // 17
		}
	}
}


void z2_2_6() {
	double x, y, R;
	int k;
	printf("������� ������ ������ R: \n");
	scanf_s("%lf", &R);
	printf("������� ���������� ���������: \n");
	scanf_s("%d", &k);
	for (int i = 1; i <= k; i++) {
		printf("������� ���������� x �������� %d: \n", i);
		scanf_s("%lf", &x);
		printf("������� ���������� y �������� %d: \n", i);
		scanf_s("%lf", &y);
		bool condition1 = pow(x + R, 2) + pow(y + R, 2) >= R * R;
		bool condition2 = pow(x - R, 2) + y * y <= R * R;
		if (condition1 && x <= 0 && y <= 0 || condition2 && x >= 0 && y >= 0) {
			printf("������� %d �����\n", i);
		}
		else
		{
			printf("������� %d �� �����\n", i);
		}
	}
}