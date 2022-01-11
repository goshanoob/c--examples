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

int main() {
	// ������������ ������ 10.
	int n;
	cin >> n;
	cout << Factorial(n) << endl; 
	// ������������ ������ 11.
	string testString = "metotem";
	cout << IsPalindrom(testString) << endl;
	// ������������ ������ 12.
	vector<string> words = { "polilop" , "lolipop", "kokok", "rock", "lol" };
	words = PalindromFilter(words, 4);
	for (auto word : words) {
		cout << word << endl;
	}


	return 0;
}
