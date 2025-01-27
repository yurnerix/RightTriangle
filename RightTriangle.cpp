#include <iostream>
#include <math.h>

using namespace std;

bool isTriangle(double a, double b, double c)
{
	return (a + b > c and a + c > b and b + c > a);
}

bool isRightTriangle(double a, double b, double c)
{
	double a2 = pow(a, 2);
	double b2 = pow(b, 2);
	double c2 = pow(c, 2);
	return (a2 + b2 == c2 or a2 + c2 == b2 or b2 + c2 == a2);
}

int main()
{
	cout << "Enter the numbers for the triangle: " << endl;
	double a, b, c;
	cin >> a >> b >> c;

	if (isRightTriangle(a, b, c))
		cout << "Yes, right triangle" << endl;
	else if (!isTriangle(a, b, c))
		cout << "Underfined" << endl;
	else
	{
		cout << "No, not a right triangle" << endl;
	}

}
