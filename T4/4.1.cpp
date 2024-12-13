#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	if (*s1 == '\0')
	{
		return 0;
	}
	int j=0;
	for (; s2[j] != '\0'; j++)
	{
		if (s2[j] == s1[0])
		{
			int n = 0;
			while (s1[n] != '\0' && s2[j + n] == s1[n])
			{
				n++;
			}
			if (s1[n] == '\0')
			{
				return j;
			}
		}
	}
	 return -1;	
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:";
	cin >> s1 ;
	cout <<endl<< "Enter the second string:";
	cin >> s2 ;
	cout <<endl<< "indexOf(*s1, *s2)is:" << indexof(s1, s2);
	return 0;
}
