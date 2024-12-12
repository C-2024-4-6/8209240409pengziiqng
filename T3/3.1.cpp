#include <iostream>
using namespace std;
void GCDAndLCM(int m, int n, int& gcd, int& lcm)
{
    if (m <= 0 || n <= 0) {
        cout << "���������������Ȼ��������������" << endl;
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

    cout << "������������Ȼ�� m �� n: ";
    cin >> m >> n;
    GCDAndLCM(m, n, gcd, lcm);
    cout << "���Լ�� (GCD): " << gcd << endl;
    cout << "��С������ (LCM): " << lcm << endl;
    return 0;
}