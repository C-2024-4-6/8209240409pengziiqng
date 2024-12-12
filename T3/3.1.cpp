#include <iostream>
using namespace std;
void GCDAndLCM(int m, int n, int& gcd, int& lcm)
{
    if (m <= 0 || n <= 0) {
        cout << "输入的数必须是自然数（正整数）！" << endl;
        gcd = 0;
        lcm = 0;
        return;
    }
    int a = m, b = n;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (m * n) / gcd;
}
int main()
{
    int m, n, gcd, lcm;

    cout << "请输入两个自然数 m 和 n: ";
    cin >> m >> n;
    GCDAndLCM(m, n, gcd, lcm);
    cout << "最大公约数 (GCD): " << gcd << endl;
    cout << "最小公倍数 (LCM): " << lcm << endl;
    return 0;
}