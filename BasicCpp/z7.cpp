/*
Задача 7. Дана строка. Найдите в этой строке второе вхождение буквы f и выведите
индекс этого вхождения. Если буква f в данной строке встречается только  один раз,
выведите число -1, а если не встречается ни разу, выведите  число -2. Индексы нумеруются с нуля.
*/

#include <iostream>
#include <vector>
using namespace std;

int z7() {
	// Входное слово.
	string word;
	// Искомый символ.
	char letter = 'f';
	// Начальное значение позиции искомого символа.
	int position = -2;
	cin >> word;
	// Встречается ли искомый символ впервые.
	bool isFirst = true;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == letter) {
			if (isFirst) {
				isFirst = false;
				position = -1;
				continue;
			}
			position = i;
			break;
		}
	}

	cout << position;		
	return 0;
}

