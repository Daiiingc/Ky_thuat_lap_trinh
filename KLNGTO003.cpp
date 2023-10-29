#include <iostream>
#include <math.h>
using namespace std;

bool Is_Prime_Number(long long n)
{
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Tìm số nguyên tố nhỏ nhất không nhỏ hơn n(lớn hơn hoặc bằng n)
void solve(long long &num)
{
    if(num <= 4)
    {
        num = 5;
    }
    else
    {
        if(num % 2 == 0)
        {
            num++;
        }
        while(num > 0)
        {
            if(Is_Prime_Number(num) && Is_Prime_Number(num-2))
            {
                break;
            }
            num += 2;
        }
    }
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        solve(n);
        cout << n << endl;
    }
    return 0;
}