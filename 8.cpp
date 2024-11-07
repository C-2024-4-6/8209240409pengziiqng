#include <iostream>
#include <cmath>
using namespace std;
double iterativeSquareRoot(double a)
	{
	if (a < 0) {
		cout << "输入为负数，计算其绝对值的平方根" << endl;
		a = abs(a);
	}
	double xn = a;
	double xn1;

	do {
		xn1 = 0.5 * (xn + a / xn);
		if (abs(xn1 - xn) < 1e-10) {
			break;
		}
		xn = xn1;
	} while (true);

	return xn1;
}

int main() 
{
	double a;
	cout << "请输入一个数: ";
	cin >> a;

	double result = iterativeSquareRoot(a);
	cout << "平方根为: " << result << endl;

	return 0;
}