/*
������ 4. ���� ��� ����� ����� A � B � ��������� �� 0 �� 1 000 000 ������������.
�������� ���������, ������� ��������� ����� ����� �������� �� ������� A �� B.
���� B = 0, �������� "Impossible".
*/

#include <iostream>
#include <vector>
using namespace std;

void z4() {
    cout << "������ 4. ������� ��� �����, ����� ����� ������� �� �������:" << endl;

    int A, B;
    cin >> A >> B;
    if (B == 0) {
        cout << "Impossible";
        return;
    }
    cout << A / B;
}
