/*
������ 4. ���� ��� ����� ����� A � B � ��������� �� 0 �� 1 000 000 ������������.
�������� ���������, ������� ��������� ����� ����� �������� �� ������� A �� B.
���� B = 0, �������� "Impossible".
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
