#include <iostream>
#include <cctype>  
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) 
    {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);

        if (c >= 'a' && c <= 'z') 
        {
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 };
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < SIZE; i++) 
    {
        if (counts[i] > 0) 
        {
            cout << char(i + 'a') << ": " << counts[i] << "times" << endl;
        }
    }
    return 0;
}
