/*
Задача 4. Дано два целых числа A и B в диапазоне от 0 до 1 000 000 включительно.
Напишите программу, которая вычисляет целую часть частного от деления A на B.
Если B = 0, выведите "Impossible".
*/

#include <iostream>
#include <vector>
using namespace std;

int z4() {
    int A, B;
    cin >> A >> B;
    if (B == 0) {
        cout << "Impossible";
        return 0;
    }
    cout << A / B;
    return 0;
}
