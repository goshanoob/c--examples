﻿/*
Задача 3. На вход вашей программы в стандартном потоке ввода подаются действительные коэффициенты
A, B и C  уравнения Ax² + Bx + C = 0. Выведите все его различные действительные корни в поток
вывода в любом порядке, при этом разделяя корни пробелами.
Гарантируется, что хотя бы один из коэффициентов уравнения не равен нулю.
*/

#include <iostream>
#include <vector>
using namespace std;

int z3() {
    int a, b, c;
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
     if (D < 0) {
         cout << "КОрней нет";
     } else if (D == 0) {
         cout << -b / 2 / a;
     } else {
         cout << (-b + sqrt(D)) / 2 / a;
         cout << (-b - sqrt(D)) / 2 / a;

     }

     return 0;

     /* 
     // Вариант 2.
      if (a == 0) {
          cout << -c / b;
      }
      else {

      }
      */
}