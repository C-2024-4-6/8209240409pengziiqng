#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	float C ;
	cout << "请输入三角形三边长度: ";
	cin >> a >> b >> c;
	float temp = a;	
	if (a + b > c && a - b < c) {
		C = a + b + c;
		cout << "三角形周长=" << C << endl;

		if (a == b || b == c || c == a)
			cout << "该三角形为等腰三角形" << endl;
		else cout << "该三角形不是等腰三角形" << endl;
	}
	else cout << "不能组成三角形";
	return 0;
}