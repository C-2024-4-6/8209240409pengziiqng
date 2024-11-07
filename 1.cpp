#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;//k未定义
	cout << i++ << endl;
	int a= 1;//i重复定义
	cout << a++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
