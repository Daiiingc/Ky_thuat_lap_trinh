#include <iostream>

using namespace std;

int Convert_Decimal_To_Hexadecimal(long long n, char hex[])
{
    int count = 0;
    while(n > 0)
    {
        int temp = n % 16;
        if(temp < 10)
        {
            hex[count] = temp + '0';
        }
        else
        {
            hex[count] = temp - 10 + 'A';
        }
        count++;
        n /= 16;
    }
    hex[count] = '\0';
    return count;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        char hex[20];
        cin >> n;
        if(n == 0)
        {
            cout << 0;
        }
        else
        {
            int length_arr = Convert_Decimal_To_Hexadecimal(n,hex);
            for(int i = length_arr - 1; i >= 0; i--)
            {
                cout << hex[i];
            }
        }
        cout << endl;
    }
    return 0;
}