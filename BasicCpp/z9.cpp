/*
������ 9. �� ���� ���� ����� ������������� ����� N. �������� ��� � �������� �������
��������� ��� ������� �����.
*/

#include <iostream>
#include <vector>
using namespace std;

int z9() {
	// ���������� ����� �� �����.
	int number;
	// ��������� ������� ���������, 
	int	radix = 2;
	// ������� �� �������.
	int remainder = 1;
	// ����� � �������� ������� ���������.
	vector<int> binNumber;
	cin >> number;
	do {
		remainder = number % radix;
		number /= radix;
		binNumber.push_back(remainder);
	} while (number >= radix);

	binNumber.push_back(number);

	for (int i = binNumber.size() - 1; i >= 0; i--) {
		cout << binNumber[i];
	}
	
	return 0;
}
