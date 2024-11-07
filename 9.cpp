#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	for (i = 2; i <= 100; i = i * 2)
		sum = sum + i;
	cout << "每天平均花" << sum * 0.8 / 6.0<<"元";
	return 0;
}