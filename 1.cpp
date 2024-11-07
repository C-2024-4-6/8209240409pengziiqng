#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> a;
	if (islower(a)) {
		a = toupper(a);
		cout << a << endl;
	}
	else 
	{
		cout << static_cast<int>(a + 1) << endl;
	}
	return 0;
}