/*
Задача 11. Напишите функцию, которая:
- называется IsPalindrom;
- возвращает bool;
- принимает параметр типа string и возвращает, является ли переданная строка палиндромом.
Палиндром - это слово или фраза, которые одинаково читаются слева направо и справа налево.
Пустая строка является палиндромом.
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