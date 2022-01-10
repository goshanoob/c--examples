/*
������ 9. �� ���� ���� ����� ������������� ����� N. �������� ��� � �������� �������
��������� ��� ������� �����.
*/

#include <iostream>
#include <vector>
using namespace std;

int z9() {
	// ���������� �����, ��������� ������� ���������, ������� �� �������.
	int number, radix = 2, remainder = 1;
	// ����� � �������� ������� ���������.
	vector<int> binNumber;
	cin >> number;
	do {
		remainder = number % radix;
		number /= radix;
		binNumber.push_back(remainder);
	} while (remainder >= radix);

	for (auto number : binNumber) {
		cout << number;
	}
	

	return 0;
}
