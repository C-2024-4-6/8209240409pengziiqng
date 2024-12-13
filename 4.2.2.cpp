#include <iostream>
#include <cstring>
#include <cmath> 
using namespace std;
int parseHex(const char* const hexString) 
{
    int result = 0; 
    int len = strlen(hexString); 
    for (int i = 0; i < len; ++i) 
    {
        char ch = hexString[i];
        int value;
        if (ch >= '0' && ch <= '9')
        {
            value = ch - '0'; 
        }
        else if (ch >= 'A' && ch <= 'F') 
        {
            value = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') 
        {
            value = ch - 'a' + 10; 
        }
        else 
        {
            cout << "无效的16进制字符: " << ch << endl;
            return -1;
        }
        result = result * 16 + value;
    }
    return result;
}

int main()
{
    char hexString[100];
    cout << "enter the hexstring:";
    cin >>hexString;
    int decimal = parseHex(hexString);
    if (decimal != -1) 
    {
        cout << "16进制数 " << hexString << " 转换为10进制数是: " << decimal << endl;
    }
    return 0;
}
