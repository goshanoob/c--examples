/*
Задача 1. На вход программе через стандартный ввод передаются два целых числа,
по модулю не превышающие 100000. Выведите в стандартный вывод их сумму.
*/

#include <iostream>
#include <vector>
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

int main()
{
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
}