/*
������ 11. �������� �������, �������:
- ���������� IsPalindrom;
- ���������� bool;
- ��������� �������� ���� string � ����������, �������� �� ���������� ������ �����������.
��������� - ��� ����� ��� �����, ������� ��������� �������� ����� ������� � ������ ������.
������ ������ �������� �����������.
*/

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string inputString) {
	string reverseString = "";
	for (int i = inputString.size() - 1; i >= 0; i--) {
		reverseString += inputString[i];
	}

	return inputString == reverseString;
}