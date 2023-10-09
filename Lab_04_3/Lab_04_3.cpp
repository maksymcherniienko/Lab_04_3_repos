// Lab_04_3.cpp
// Чернієнко Максима
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 25

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double F, a, b, c, x, xk, dx;
	cout << "xp = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "F" << "      |" << endl;
	cout << "---------------------------" << endl;

	for (x; x <= xk; x += dx)
	{
		if (x < 0 && b != 0)
			F = a - x / (10 + b);
		else
			if (x > 0 && b == 0)
				F = ((x - a) / (x - c));
			else
				F = 3 * x + 2 / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << F
			<< "   |" << endl;
	}
	cout << "---------------------------" << endl;
}