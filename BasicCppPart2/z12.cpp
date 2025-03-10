﻿/*
Задача 12. Напишите функцию, которая:
- называется PalindromFilter;
- возвращает vector<string>;
- принимает vector<string> words и int minLength и возвращает все строки из вектора words, 
которые являются палиндромами и имеют длину не меньше minLength;
Входной вектор содержит не более 100 строк, длина каждой строки не больше 100 символов.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsPalindrom(string);

vector<string> PalindromFilter(vector<string> words, int minLength) {
	vector<string> polindroms;
	for (auto word : words) {
		if (IsPalindrom(word) && word.size() >= minLength) {
			polindroms.push_back(word);
		}
	}

	return polindroms;
}