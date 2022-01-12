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
void UpdateIfGreater(int, int&);
void MoveStrings(vector<string>&, vector<string>&);

int main() {
	setlocale(LC_ALL, "");

	// Тестирование задачи 10.

	cout << "Задача 10. Введите число для нахождения факториала:" << endl;

	int n;
	cin >> n;
	cout << Factorial(n) << endl; 

	// Тестирование задачи 11.
	string testString = "metotem";

	cout << "Задача 11. Результат тестирования на полиндром строки '" << testString << "'" << endl;

	cout << IsPalindrom(testString) << endl;

	// Тестирование задачи 12.

	cout << "Задача 12. Фильтрация вектора строк \{ 'polilop' , 'lolipop', 'kokok', 'rock', 'lol' \} на полиндромы и длину: " << endl;
	
	vector<string> words = { "polilop" , "lolipop", "kokok", "rock", "lol" };
	words = PalindromFilter(words, 4);
	for (auto word : words) {
		cout << word << " " << endl;
	}

	// Тестирование задачи 13.

	cout << "Задача 13. Изменить значение second, если first больше:" << endl;

	int first = 10, second = -44;
	UpdateIfGreater(first, second);
	cout << second << endl;
	UpdateIfGreater(43, second);
	cout << second << endl;

	// Тестирование задачи 14.

	cout << "Задача 14. Перемещение эл-ов одного вектора в конец другого:" << endl;

	vector<string> source = { "a", "b", "c" };
	vector<string> destination = { "z" };
	MoveStrings(source, destination);
	cout << "Количество эл-ов в source: " << source.size() << endl;
	cout << "Элементы в destination:" << endl;
	for(auto element : destination){
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
