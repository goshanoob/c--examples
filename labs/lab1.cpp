/*
Лабораторная 1. Линейные программы.
Напишите программу расчета по двум формулам. Предварительно подготовьте тестовые примеры 
(результат вычисления по первой формуле должен в большинстве вариантов совпадать со второй). 
Список математических функций библиотеки C++ приведен в Учебнике на с. 410. Для их использования необходимо подключить
к программе заголовочный файл <cmath>. Отсутствующие в библиотеке функции выразите через имеющиеся.
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void z2();

int main() 
{
	z2();

	setlocale(LC_ALL, "Russian");
	// Вариант 1.
	double z1, z2, alpha, betta;
	double x, y, m, n;
	cout << "В1. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = 2 * pow(sin(3 * M_PI - 2 * alpha), 2);
	z1 *= pow(cos(5 * M_PI + 2 * alpha), 2);
	z2 = 1.0 / 4 - 1.0 / 4 * sin(5.0 / 2 * M_PI - 8 * alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0.28637501; z2 = 0.28637501;
	// alpha = 0; z1 = 0; z2 = 0;
	// alpha = -2500; z1 = 0.0467001; z2 = 0.0467001;
	// alpha = 1.12456; z1 = 0.477418; z2 = 0.477418 ;
	// alpha = -0.2458; z1 = 0.346341; z2 = 0.346341;

	// Вариант 2.
	cout << "В2. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
	z2 = 2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0.532901; z2 = 0.532901;
	// alpha = 0; z1 = 2; z2 = 2;
	// alpha = -2500; z1 = 1.73641; z2 = 1.736405;
	// alpha = 1.12456; z1 = 0.130453; z2 = 0.130453;
	// alpha = -0.2458; z1 = k = 0.794464; z2 = 0.794464;
	
	// Вариант 3.
	cout << "В3. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) + 1 - 2 * pow(sin(2 * alpha), 2));
	z2 = 2 * sin(alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 1.68294; z2 = ;
	// alpha = 0; z1 = 0; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 4.
	cout << "В4. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) - cos(3 * alpha) + cos(5 * alpha));
	z2 = tan(3 * alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = -0.1052; z2 = -0.142546543;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 5.
	cout << "В5. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = 1 - 1.0 / 4 * pow(sin(2 * alpha), 2) + cos(2 * alpha);
	z2 = pow(cos(alpha), 2) + pow(cos(alpha), 4);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0.3771; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 6.
	cout << "В6. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = cos(alpha) + cos(2 * alpha) + cos(6 * alpha) + cos(7 * alpha);
	z2 = 4 * cos(alpha / 2) * cos(5 / 2 * alpha) * cos(4 * alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 1.838; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 7.
	cout << "В7. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = pow(cos(3.0 / 8 * M_PI - alpha / 4), 2) - pow(cos(11.0 / 8 * M_PI + alpha / 4), 2);
	z2 = sqrt(2) / 2 * sin(alpha / 2);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0.339; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 8.
	cout << "В8. Введите значение x и y через пробел: " << endl;
	cin >> x >> y;
	z1 = pow(cos(x), 4) + pow(sin(y), 2) + 1.0 / 4 * pow(sin(2 * x), 2) - 1;
	z2 = sin(y + x) * sin(y - x);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 9.
	cout << "В9. Введите значение alpha и betta через пробел: " << endl;
	cin >> alpha >> betta;
	z1 = pow(cos(alpha) - cos(betta), 2) - pow(sin(alpha) - sin(betta), 2);
	z2 = -4 * pow(sin((alpha - betta) / 2), 2) * cos(alpha + betta);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = 0; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;

	// Вариант 10.
	cout << "В10. Введите значение alpha: " << endl;
	cin >> alpha;
	z1 = sin(M_PI / 2 + 3 * alpha) / (1 - sin(3 * alpha - M_PI));
	z2 = 1 / tan(5 / 4 * M_PI + 3 / 2 * alpha);
	cout << "z1 = " << z1 << " z2 = " << z2 << endl;

	// Тестовые значения:
	// alpha = 1; z1 = -0.8675621; z2 = ;
	// alpha = 0; z1 = ; z2 = ;
	// alpha = -2500; z1 = ; z2 = ;
	// alpha = 1.12456; z1 = ; z2 =  ;
	// alpha = -0.2458; z1 = ; z2 = ;
}
