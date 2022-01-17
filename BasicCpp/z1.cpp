/*
������ 1. �� ���� ��������� ����� ����������� ���� ���������� ��� ����� �����,
�� ������ �� ����������� 100000. �������� � ����������� ����� �� �����.
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
    cout << "������ N1. �������� ������� ��������� ������� { 1, 5, 3, 4, 2 }: " << endl;
    vector<int> numbers = { 1, 5, 3, 4, 2 };
    Reverse(numbers);
    // numbers ������ ��������� ����� {2, 4, 3, 5, 1}
    for (auto element : numbers) {
        
        cout << element << " " << endl;
    }

    numbers = { 1, 2, 3, 4, 5 };
    vector<int> reversedNumbers = Reversed(numbers);

    cout << "������ N2. ������� ����� ������� � �������� �������� ���������: " << endl;
    for (auto element : reversedNumbers) {
        cout << element << " " << endl;
    }
    cout << "�������� ������ { 1, 2, 3, 4, 5 � }: " << endl;
    for (auto element : numbers) {
        cout << element << " " << endl;
    }

}