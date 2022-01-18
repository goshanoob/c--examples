/*
Реализуйте функцию vector<int> Reversed(const vector<int>& v), возвращающую копию вектора v, 
в которой числа переставлены в обратном порядке.
Гарантируется, что вектор v имеет ненулевую длину.
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