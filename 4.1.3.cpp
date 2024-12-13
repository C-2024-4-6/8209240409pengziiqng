#include<iostream>
using namespace std;
int main()
{
	bool state[100] = { false };  
	for (int n = 1; n <= 100; n++)
	{
		for (int k = n - 1; k < 100; k += n)
		{
			state[k] = !state[k];
		}
	}
	for (int j= 0; j < 100; j++)
		if (state[j])
			cout << j + 1 << '\t';
	return 0;
}