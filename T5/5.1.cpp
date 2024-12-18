#include<iostream>
using namespace std;
class Time             
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void inputTime()
	{
		cout << "Enter hour:";
		cin >> hour;
		cout << "Enter minute:";
		cin >> minute;
		cout << "Enter second:";
		cin >> sec;
	}
	void displayTime()
	{
		cout << hour<<":" << minute <<":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.inputTime();
	t1.displayTime();
	return 0;
}