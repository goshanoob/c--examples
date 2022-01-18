﻿/*
Задача 14. Напишите функцию MoveStrings, которая принимает два вектора строк, source и destination,
и дописывает все строки из первого вектора в конец второго. После выполнения функции вектор source
должен оказаться пустым.
*/

#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
	for (auto element : source) {
		destination.push_back(element);
	}
	source.clear();
}