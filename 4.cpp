#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "����������ʵ��:" << endl;
	cin >> a >> b;
	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	if (b != 0)
	{
		cout << "a/b=" << a / b << endl;
	}
	else cout << "����������" << endl;
	int c, d;
	cout<< "��������������:" << endl;
	cin >> c >> d;
	if (d != 0)
	{
		cout << "c%d=" << c% d << endl;
	}
	else cout << "����������" << endl;
	return 0;
}