#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "please input Fahrenheit temperature(F):" <<endl;
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << "Celsius temperature:"<<fixed<<setprecision(2) << c << "(C)" << endl;
	return 0;
}