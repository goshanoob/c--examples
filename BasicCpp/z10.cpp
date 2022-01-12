/*
������ 10. �������� �������, �������:
- ���������� Factorial;
- ���������� int;
- ��������� int � ���������� ��������� ������ ���������.
�������������, ��� �������� ������� �� ������ �� ��������� 10. 
��� ������������� ���������� ������� ������ ���������� 1.
*/

#include <iostream>
#include <vector>
using namespace std;

int Factorial(int n) {
	return n <= 1 ? 1 : n * Factorial(n - 1);
}

bool IsPalindrom(string);
vector<string> PalindromFilter(vector<string>, int);
void UpdateIfGreater(int, int&);
void MoveStrings(vector<string>&, vector<string>&);

int main() {
	setlocale(LC_ALL, "");

	// ������������ ������ 10.

	cout << "������ 10. ������� ����� ��� ���������� ����������:" << endl;

	int n;
	cin >> n;
	cout << Factorial(n) << endl; 

	// ������������ ������ 11.
	string testString = "metotem";

	cout << "������ 11. ��������� ������������ �� ��������� ������ '" << testString << "'" << endl;

	cout << IsPalindrom(testString) << endl;

	// ������������ ������ 12.

	cout << "������ 12. ���������� ������� ����� \{ 'polilop' , 'lolipop', 'kokok', 'rock', 'lol' \} �� ���������� � �����: " << endl;
	
	vector<string> words = { "polilop" , "lolipop", "kokok", "rock", "lol" };
	words = PalindromFilter(words, 4);
	for (auto word : words) {
		cout << word << " " << endl;
	}

	// ������������ ������ 13.

	cout << "������ 13. �������� �������� second, ���� first ������:" << endl;

	int first = 10, second = -44;
	UpdateIfGreater(first, second);
	cout << second << endl;
	UpdateIfGreater(43, second);
	cout << second << endl;

	// ������������ ������ 14.

	cout << "������ 14. ����������� ��-�� ������ ������� � ����� �������:" << endl;

	vector<string> source = { "a", "b", "c" };
	vector<string> destination = { "z" };
	MoveStrings(source, destination);
	cout << "���������� ��-�� � source: " << source.size() << endl;
	cout << "�������� � destination:" << endl;
	for(auto element : destination){
		cout << element << " ";
	}
	cout << endl;

	return 0;
}
