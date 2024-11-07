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
    cout << "请输入两个正整数：";
    cin >> num1 >> num2;

    int greatestCommonDivisor = gcd(num1, num2);
    int leastCommonMultiple = lcm(num1, num2);

    cout << num1 << "和" << num2 << "的最大公约数是：" << greatestCommonDivisor << endl;
    cout << num1 << "和" << num2 << "的最小公倍数是：" << leastCommonMultiple << endl;

    return 0;
}