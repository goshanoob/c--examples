/*
������ 14. �������� ������� MoveStrings, ������� ��������� ��� ������� �����, source � destination,
� ���������� ��� ������ �� ������� ������� � ����� �������. ����� ���������� ������� ������ source
������ ��������� ������.
*/

#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
	for (auto element : source) {
		destination.push_back(element);
	}
	source.clear();
}