#include<iostream>
using namespace std;
class Max 
{
private:
	int num_grade[5][2] = { {1,88},{2,87},{3,98},{4,93},{5,86} };
public:
	void max()
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				if (num_grade[j][1] < num_grade[j + 1][1])
				{
					int temp = num_grade[j][1];
					int temp1 = num_grade[j][0];
					num_grade[j][1] = num_grade[j + 1][1];
					num_grade[j][0] = num_grade[j + 1][0];
					num_grade[j + 1][1] = temp;
					num_grade[j + 1][0] = temp1;
				}
		cout << "Max:" << num_grade[0][0];
	}
};
int main()
{
	Max m1;
	m1.max();
	return 0;
}