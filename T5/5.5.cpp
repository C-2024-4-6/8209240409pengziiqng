#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(x,y)=" << "(" << x << "," << y << ")" << endl;;
	}
};
int main()
{
	Point p1;
	cout << "原坐标为：";
	p1.display();
	p1.setPoint(30, 45);
	cout << "修改后坐标为：";
	p1.display();
	return 0;
}