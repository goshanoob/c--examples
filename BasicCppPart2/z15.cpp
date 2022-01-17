/*
������ N. ���������� ������� void Reverse(vector<int>& v), ������� ������������ �������� ������� � �������� �������.
�������������, ��� ������ v ����� ��������� �����.
*/

#include <iostream>
#include <vector>
using namespace std;


void Reverse(vector<int>& v) {
	int length = v.size();
	for (int i = 0; i < length / 2; i++) {
		int temp = v[i];
		v[i] = v[length - 1 - i];
		v[length - 1 - i] = temp;
	}
}

/*
// �������������� �������.
void Reverse(vector<int>& v) {
	vector<int> tempV;
	for (int i = v.size() - 1; i >= 0; i--) {
		tempV.push_back(v[i]);
	}
	v = tempV;
}
*/