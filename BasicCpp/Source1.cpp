/*
	������ N. ���������� ������� vector<int> Reversed(const vector<int>& v), ������������ ����� ������� v, 
	� ������� ����� ������������ � �������� �������.
	�������������, ��� ������ v ����� ��������� �����.
*/

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v);

vector<int> Reversed(const vector<int>& v) {
	vector<int> newV = v;
	Reverse(newV);
	return newV;
}