//Lab_03_3.cp
// �������� �����
//����������� ������ �3.3
//������������, ������ �������� �������.
//������ 28

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	
	//������������ � ����� ����
	if (x >= ( - 8 - R) && x <= ( - 8 + R))
		y = -sqrt((R*R) - pow(x - (-8), 2)) - R;
	else
		if (x > ( - 8 + R) && x <= 2)
			y = x - R;
		else
			if (x > 2  && x <= 6)
				y = 0;
			else
				if (x > 6 && x <= 8)
					y = pow((x - 6), 2);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}