#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	float a, m, c, d, l, b, e, f, g;
	cout << "���������� ����� �����\n";
	cin >> l;
	cout << "����� �����\n";
	cin >> m;
	cout << "����� �������\n";
	cin >> c;
	cout << "���������� �� �������� ��� �� ������ �����\n";
	cin >> a;
	cout << "���������� �� ������ ����� �� ������ ���\n";
	cin >> b;
	d = c / 2;
	e = d + (m * b / l);
	g = d + (m * a / l);

	cout << "�������� �� �������� ���:" << e << endl;
	cout << "�������� �� ������ ���:" << g << endl;


}
