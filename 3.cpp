#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	float C ;
	cout << "���������������߳���: ";
	cin >> a >> b >> c;
	float temp = a;	
	if (a + b > c && a - b < c) {
		C = a + b + c;
		cout << "�������ܳ�=" << C << endl;

		if (a == b || b == c || c == a)
			cout << "��������Ϊ����������" << endl;
		else cout << "�������β��ǵ���������" << endl;
	}
	else cout << "�������������";
	return 0;
}