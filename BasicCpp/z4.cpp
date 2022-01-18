/*
Задача 4. Дано два целых числа A и B в диапазоне от 0 до 1 000 000 включительно.
Напишите программу, которая вычисляет целую часть частного от деления A на B.
Если B = 0, выведите "Impossible".
*/

#include <iostream>
#include <vector>
using namespace std;

void z4() {
    cout << "Задача 4. Введите два числа, чтобы найти остаток от деления:" << endl;

    int A, B;
    cin >> A >> B;
    if (B == 0) {
        cout << "Impossible";
        return;
    }
    cout << A / B;
}
