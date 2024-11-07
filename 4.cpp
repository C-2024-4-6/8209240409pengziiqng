#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "请输入两个实数:" << endl;
	cin >> a >> b;
	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	if (b != 0)
	{
		cout << "a/b=" << a / b << endl;
	}
	else cout << "除数不存在" << endl;
	int c, d;
	cout<< "请输入两个整数:" << endl;
	cin >> c >> d;
	if (d != 0)
	{
		cout << "c%d=" << c% d << endl;
	}
	else cout << "余数不存在" << endl;
	return 0;
}