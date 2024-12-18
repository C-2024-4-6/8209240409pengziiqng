#include<iostream>
using namespace std;
class volumn 
{
public:
	void inputvol()
	{
		cout << "Enter length:";
		cin >> length;
		cout << "Enter width:";
		cin >> width;
		cout << "Enter height:";
		cin >> height;
	}
	void workvol()
	{
		vol = length * width * height;
	}
	void displayvol()
	{
		 
		cout << "volumn=" <<vol;
	}
private:
	double length;
	double width;
	double height;
	double vol;
};
int main()
{
	volumn v1;
	v1.inputvol();
	v1.workvol();
	v1.displayvol();
	return 0;
}