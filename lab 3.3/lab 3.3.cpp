// Lab_03_3.cpp
// ������������ �������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 14
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� �������� 
	double y; // ��������� ���������� ������
	cout << "x = "; cin >> x;
	if (x <= -4)
		y = -2;
	if (x > -4 && x <= 0)
		y = -3. / 4 * x;
	if (x >= 0 && x <= 2)
		y = x * x;
	if (x >= 2)
		y = x = 3.5 * (x - 2);
	cout << endl;
	cout << "y = " << y << endl;
	system("pause");
	return 0;
}