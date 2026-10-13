// Lab_05_1.cpp
// < Shakh Vlad >
// Лабораторна робота № 5.1 (використовується в завданні № 5.0)
// Функції, що містять арифметичний вираз
// Варіант 32

#include <iostream>
#include <cmath>

using namespace std;

double t(const double x);   // прототип

int main()
{
	double y;

	cout << "y = "; cin >> y;

	double u = t(1 + fabs(y));          // вираз під коренем

	if (u < 0)
	{
		cout << "Error: expression under the root is negative" << endl;
		return 1;
	}

	double chyselnyk = 1 + 2 * t(1 + y * y) - pow(t(2 * y), 2);
	double znamennyk = 10 + sqrt(u);

	double c = chyselnyk / znamennyk;

	cout << "c = " << c << endl;

	return 0;
}

double t(const double x)            // визначення
{
	return pow(x, 2) / 2 - pow(x, 4) / 24 - 1;
}