#include<iostream>
using namespace std;
int main()
{
	unsigned int r, h;
	cout << "请分别输入圆锥的半径和锥高（m)" << endl;
	cin >> r >> h;
	double pi = 3.14;
	double V = pi * r * r * h / 3;
	cout <<"圆锥的体积=" << V <<"m^2"<< endl;
	return 0;
}