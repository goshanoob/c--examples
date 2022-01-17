/*
Задача 1. На вход программе через стандартный ввод передаются два целых числа,
по модулю не превышающие 100000. Выведите в стандартный вывод их сумму.
*/

#include <iostream>
<<<<<<< HEAD
#include <vector>
=======
>>>>>>> 531c2d5d15d6e770230ed6569f3915d7514dfd3a
using namespace std;

void z1() {
	cout << "Задача 1. Введите два числа, чтобы сложить их:" << endl;

    int x1, x2;
    cin >> x1 >> x2;
	cout << x1 + x2 << endl;
}

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
<<<<<<< HEAD
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

=======
	setlocale(LC_ALL, "");
	z1();
	z2();
	z3();
	z4();
	z5();
	z6();
	z7();
	z8();
	z9();

	return 0;
>>>>>>> 531c2d5d15d6e770230ed6569f3915d7514dfd3a
}