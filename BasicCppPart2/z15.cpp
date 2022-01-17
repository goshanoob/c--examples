/*
Задача N. Реализуйте функцию void Reverse(vector<int>& v), которая переставляет элементы вектора в обратном порядке.
Гарантируется, что вектор v имеет ненулевую длину.
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
// Альтернативное решение.
void Reverse(vector<int>& v) {
	vector<int> tempV;
	for (int i = v.size() - 1; i >= 0; i--) {
		tempV.push_back(v[i]);
	}
	v = tempV;
}
*/