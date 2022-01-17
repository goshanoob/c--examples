/*
«адача 11. Ќапишите функцию, котора€:
- называетс€ IsPalindrom;
- возвращает bool;
- принимает параметр типа string и возвращает, €вл€етс€ ли переданна€ строка палиндромом.
ѕалиндром - это слово или фраза, которые одинаково читаютс€ слева направо и справа налево.
ѕуста€ строка €вл€етс€ палиндромом.
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