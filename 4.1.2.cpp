#include<iostream>
using namespace std;
double sort_from_less_to_more(int a,double arr[10])
{
	for (int i = 1; i < a; i++)
		for (int k = 0; k < a - i; k++)

			if (arr[k] > arr[k + 1])
			{
				double temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
			else continue;
	return 0.0;
}
int main()
{
	double arr[10];
	cout << "enter ten number in type double:";
	for (int n = 0; n < 10; n++)
	{
		cin >> arr[n];
	}
	sort_from_less_to_more(10, arr);
	for (int i = 0; i < 10; i++)
	{
		cout<< arr[i]<<'\t';
	}
	return 0;
}