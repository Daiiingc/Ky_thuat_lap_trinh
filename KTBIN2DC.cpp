#include <iostream>
#include <string.h>
using namespace std;

void Convert_Binary_To_Decimal(string s)
{
    unsigned long long result = 0, base = 1;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        result += base * (s[i] - '0');
        base *= 2;
    }
    cout << result << endl;
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        string binary;
        cin >> binary;
        Convert_Binary_To_Decimal(binary);
    }
    return 0;
}