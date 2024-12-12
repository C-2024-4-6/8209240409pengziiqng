#include<iostream>
using namespace std;
#include"mytemperature.h"
#include<iomanip>
int main()
{
    cout << fixed << setprecision(2);
    cout << "Celsius    Fahrenheit   |   Fahrenheit     Celsius" << endl;
    cout << "-----------------------------------------------" << endl;
    int n = 10; 
    double fah = 120.0, cel = 40.0;
    for (int n = 0; n < 10; n++)
    {
        double fah1 = celsius_to_fah(cel - n);
        double cel1 = fahrenheit_to_cels(fah - n * 10);
        cout << cel-n << "     " << fah1 << "       |    " << fah-n*10 << "        " << cel1 << endl;
    }
	return 0;
}