#include <iostream>
#include <cctype>
using namespace std;
int main() {
	int letters = 0; 
	int spaces = 0; 
	int digits = 0; 
	int others = 0; 
	char c;
	cout << "������һ���ַ���";
	while (cin.get(c) && c != '\n') {
		if (isalpha(c)) {
			letters++;
		}
		else if (isspace(c)) {
			spaces++;
		}
		else if (isdigit(c)) {
			digits++;
		}
		else {
			others++;
		}
	}

	cout << "Ӣ����ĸ������" << letters << endl;
	cout << "�ո������" << spaces << endl;
	cout << "�����ַ�������" << digits << endl;
	cout << "�����ַ�������" << others << endl;

	return 0;
}