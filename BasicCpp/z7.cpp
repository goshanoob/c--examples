/*
������ 7. ���� ������. ������� � ���� ������ ������ ��������� ����� f � ��������
������ ����� ���������. ���� ����� f � ������ ������ ����������� ������  ���� ���,
�������� ����� -1, � ���� �� ����������� �� ����, ��������  ����� -2. ������� ���������� � ����.
*/

#include <iostream>
#include <vector>
using namespace std;

int z7() {
	// ������� �����.
	string word;
	// ������� ������.
	char letter = 'f';
	// ��������� �������� ������� �������� �������.
	int position = -2;
	cin >> word;
	// ����������� �� ������� ������ �������.
	bool isFirst = true;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == letter) {
			if (isFirst) {
				isFirst = false;
				position = -1;
				continue;
			}
			position = i;
			break;
		}
	}

	cout << position;		
	return 0;
}

