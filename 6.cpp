#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main() 
{
    int num1, num2;
    cout << "������������������";
    cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2);
    int leastCommonMultiple = lcm(num1, num2);

    cout << num1 << "��" << num2 << "�����Լ���ǣ�" << greatestCommonDivisor << endl;
    cout << num1 << "��" << num2 << "����С�������ǣ�" << leastCommonMultiple << endl;

    return 0;
}