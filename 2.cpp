#include<iostream>
using namespace std;
int main()
{
	double x;
	cout << "please input the number you want(0<x<10):";
	cin >> x;
	double a, b, c;
	if (0 < x&&x < 1)
	{
		a = 3 - 2 * x;
		cout << "y=" << a;
	}
	if (1 <= x&&x < 5)
	{
		b = 2.0/ 4.0 * x + 1;
		cout << "y=" << b;
	}
	if (5 <=x&&x < 10)
	{
		c = x * x;
		cout << "y=" << c;
	}
	return 0;
}