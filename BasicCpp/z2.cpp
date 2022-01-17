/*
Задача 2. В стандартном потоке даны три строки, разделённые пробелом.
Каждая строка состоит из строчных латинских букв и имеет длину не более 30 символов.
Выведите в стандартный вывод лексикографически минимальную из них.
*/

#include <iostream>
#include <vector>
using namespace std;

void z2() {
    cout << "Задача 2. Введите три строки, чтобы найти минимальную среди них:" << endl;

    // Входные строки для сравнения.
    string string1, string2, string3;
    cin >> string1 >> string2 >> string3;
    if (string1 < string2 && string1 < string3) {
        cout << string1;
    }
    else if (string2 < string3) {
        cout << string2;
    }
    else {
        cout << string3;
    }
}