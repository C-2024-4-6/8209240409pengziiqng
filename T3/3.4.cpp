#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "enter the length of sides:";
	cin >>side1 >> side2 >> side3;
	if (is_valid)
	{
		double area = _area(side1, side2, side3);
		cout << area;
	}
	else cout << "´íÎó";
	return 0;
}