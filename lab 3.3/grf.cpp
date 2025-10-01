//Lab_04_4.cp
// Якубович Артур
//Лабораторна робота №3.3
//Розгалуження, задане графіком функції.
//Варіант 28

#include <iostream>
#include <cmath>
#include <iomanip>
// xk=8   xp=-10  R=2  x=-10  dx=2
using namespace std;

int main()
{
	double x, xp, xk, dx;
	double R;
	double y;
	cout << "xk = "; cin >> xk;
	cout << "xp = "; cin >> xp;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "dx = "; cin >> dx;
	y = 0;
	cout << fixed;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(10) << "R" << "|" << setw(10) << "x" << "|"  << setw(10) << "y" << "|" << endl;
	cout << "----------------------------------" << endl;
	x = xp;
	while (x <= xk) {
		if (x >= (-8 - R) && x <= (-8 + R))
			y = -sqrt((R * R) - pow(x - (-8), 2)) - R;
		else
			if (x > (-8 + R) && x <= 2)
				y = x - R;
			else
				if (x > 2 && x <= 6)
					y = 0;
				else
					if (x > 6 && x <= 8)
						y = pow((x - 6), 2);
		cout << "|" << setw(10) << setprecision(2) << R << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << y << "|" << endl;
		x += dx;
	}

	cout << "----------------------------------" << endl;
	cin.get();
	return 0;
}