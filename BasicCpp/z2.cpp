/*
������ 2. � ����������� ������ ���� ��� ������, ���������� ��������.
������ ������ ������� �� �������� ��������� ���� � ����� ����� �� ����� 30 ��������.
�������� � ����������� ����� ����������������� ����������� �� ���.
*/

#include <iostream>
#include <vector>
using namespace std;

int z2() {
    // ������� ������ ��� ���������.
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

    return 0;
}

