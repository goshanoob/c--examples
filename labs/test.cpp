#include <iostream>
#include <cmath>
using namespace std;
void test() {
	const int MaxIter = 500; // ����������� ���������� ���������� ��������
	double x, eps;
	cout << "\n������� �������� � ��������:\n";
	cin >> x >> eps;
	bool done = true; // ������� ���������� ��������
	double ch = x, y = ch; // ������ ���� ���� � ��������� �������� �����
	for (int n = 0; fabs(ch) > eps; n++) {
		ch *= x * x / ((2 * n + 2) / (2 * n + 3)); // ��������� ���� ����
		y += ch; // ���������� ����� ���� � �����
		if (n > MaxIter) {
			cout << "\n��� ����������!";
			done = false; break;
		}
	}
	if (done) cout << "\n�������� �������: " << y << " ��� � = " << x << endl;
}