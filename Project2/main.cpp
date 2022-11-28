#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	float a, m, c, d, l, b, e, f, g;
	cout << "Расстояние между осями\n";
	cin >> l;
	cout << "Масса груза\n";
	cin >> m;
	cout << "Масса прицепа\n";
	cin >> c;
	cout << "Расстояние от передней оси до центра массы\n";
	cin >> a;
	cout << "Расстояние от центра массы до задней оси\n";
	cin >> b;
	d = c / 2;
	e = d + (m * b / l);
	g = d + (m * a / l);

	cout << "Нагрузка на переднюю ось:" << e << endl;
	cout << "Нагрузка на заднюю ось:" << g << endl;


}
