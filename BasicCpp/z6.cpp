/*
������ 6. ���� ��� ����� ����� A � B (A <= B, A >= 1, B <= 30000).  �������� ����� ������
��� ������ ����� �� A �� B (������������).
*/

#include <iostream>
#include <vector>
using namespace std;

int z6() {
    int A, B;
    cin >> A >> B;
    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
