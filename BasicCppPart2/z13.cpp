/*
������ 13. �������� ������� UpdateIfGreater, ������� ��������� ��� ������������� ���������: 
first � second. ���� first �������� ������ second, ���� ������� ������ ���������� � second 
�������� ��������� first. ��� ���� ��������� ������� �� ������ ������ ����������, � ��������� 
��������� second ������ ���� ����� �� ���������� �������.
*/

void UpdateIfGreater(int first, int& second) {
	if (first > second) {
		second = first;
	}
}