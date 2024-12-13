#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << " enter ten numbers: ";
	for (int i = 0; i < 10; i++) 
	{
		cin >> arr[i];
	}
	int* arrnew = new int[10];
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		bool is_unique = true;
		for (int j = 0; j < n; j++)
			if (arr[i] == arr[j])
			{
				is_unique = false;
				break;
			}
		if (is_unique) 
		{
			if (n < 10)
				arrnew[n] = arr[i], n++;
		}
	}
	cout << "The distinct numbers are:";
	for (int k = 0; k < n; k++)
		cout << arrnew[k] << " ";
	delete [] arrnew;
	return 0;
}