/*
Задача 1. На вход программе через стандартный ввод передаются два целых числа,
по модулю не превышающие 100000. Выведите в стандартный вывод их сумму.
*/

#include <iostream>
#include <vector>
using namespace std;


int z2();
int z3();
int z4();
int z5();
int z6();
int z7();
int z8();
int z9();

void Reverse(vector<int>& v);
vector<int> Reversed(const vector<int>& v);

int main()
{
    cout << "Задача N1. Изменить порядок элементов вектора { 1, 5, 3, 4, 2 }: " << endl;
    vector<int> numbers = { 1, 5, 3, 4, 2 };
    Reverse(numbers);
    // numbers должен оказаться равен {2, 4, 3, 5, 1}
    for (auto element : numbers) {
        
        cout << element << " " << endl;
    }

    numbers = { 1, 2, 3, 4, 5 };
    vector<int> reversedNumbers = Reversed(numbers);

    cout << "Задача N2. Создать копию вектора с обратным порядком элементов: " << endl;
    for (auto element : reversedNumbers) {
        cout << element << " " << endl;
    }
    cout << "Исходный вектор { 1, 2, 3, 4, 5 р }: " << endl;
    for (auto element : numbers) {
        cout << element << " " << endl;
    }

}