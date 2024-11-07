#include <iostream>
#include <cctype>
using namespace std;
int main() {
	int letters = 0; 
	int spaces = 0; 
	int digits = 0; 
	int others = 0; 
	char c;
	cout << "请输入一行字符：";
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

	cout << "英文字母个数：" << letters << endl;
	cout << "空格个数：" << spaces << endl;
	cout << "数字字符个数：" << digits << endl;
	cout << "其他字符个数：" << others << endl;

	return 0;
}