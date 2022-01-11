/*
Задача 10. Напишите функцию, которая:
- называется Factorial;
- возвращает int;
- принимает int и возвращает факториал своего аргумента.
Гарантируется, что аргумент функции по модулю не превышает 10. 
Для отрицательных аргументов функция должна возвращать 1.
*/

#include <iostream>
#include <vector>
using namespace std;

int Factorial(int n) {
	return n <= 1 ? 1 : n * Factorial(n - 1);
}

bool IsPalindrom(string);
vector<string> PalindromFilter(vector<string>, int);

int main() {
	// Тестирование задачи 10.
	int n;
	cin >> n;
	cout << Factorial(n) << endl; 
	// Тестирование задачи 11.
	string testString = "metotem";
	cout << IsPalindrom(testString) << endl;
	// Тестирование задачи 12.
	vector<string> words = { "polilop" , "lolipop", "kokok", "rock", "lol" };
	words = PalindromFilter(words, 4);
	for (auto word : words) {
		cout << word << endl;
	}


	return 0;
}
