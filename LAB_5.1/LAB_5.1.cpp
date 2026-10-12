#include <iostream>
#include <cmath>

using namespace std;

double t(const double x);   // прототип функції

int main()
{
	double y;
	cout << "y = ";
	cin >> y;

	double chyselnyk = 1 + 2 * t(1 + y * y) - pow(t(2 * y), 2);
	double znamennyk = 10 + sqrt(t(1 + fabs(y)));

	double a = chyselnyk / znamennyk;

	cout << "a = " << a << endl;

	return 0;
}

double t(const double x)    // сама функція
{
	return pow(x, 2) / 2 - pow(x, 4) / 24 - 1;
}