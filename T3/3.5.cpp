#include <iostream>
using namespace std;
int calculate_peach(int day) 
{
    if (day == 10) {
        return 1;
    }
    else
    {
        return 2 * (calculate_peach(day + 1) + 1);
    }
}
int main() 
{
   int peaches_on_day_1 = calculate_peach(1);
    cout << "The monkey picked " << peaches_on_day_1 << " peaches on the first day." << endl;
    return 0;
}
