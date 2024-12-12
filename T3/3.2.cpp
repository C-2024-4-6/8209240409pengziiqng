#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i;
	while (1)
	{
		if (num <= 1)
		{
			return false;
			break;
		}
		else
		{
			for (i = 2; i <= num; i++)
				if (num % i == 0) break;
		}
		if (i >= num)  return true;
		else return false;
	}
}
int main()
{
	for (int i = 1, k = 0, j = 0; 1; i++)
	{
		if (is_prime(i))
			if (k < 20)
			{
				if (j < 10)
					cout << i << "\t", j++;
				else j = 0, ++k, cout << "\n";
			}
			else break;
		else continue;
	}
	return 0;
}