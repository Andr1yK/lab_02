// lab_02.cpp
// Кобетяк Андрій
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 12

#include <iostream>

using namespace std;
int main()
{
	const double Pi = 4 * atan(1.); // число пі

	double x, z1, z2, z3; //оголошення змінних

	cout << "x = "; cin >> x; cout << endl;

	z1 = (sin(4 * x) / (1 + cos(4 * x))) *
		(cos(2 * x) / (1 + cos(2 * x))); // Розрахунок першої формули

	z2 = cos(((3. / 2) * Pi) - x) /
		sin(((3. / 2) * Pi) - x); // Розрахунок другої формули
	
	z3 = z1 + z2;

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cout << "z3 = " << z3 << endl;
	cin.get();
	return 0;
}