#include <iostream>
#include <math.h>
using namespace std;

long long Max(long long a, long long b)
{
    if(a >= b)
    {
        return a;
    }
    return b;
}

long long Min(long long a, long long b)
{
    if(a >= b)
    {
        return b;
    }
    return a;
}

int main(void)
{
    int T; 
    cin >> T;
    if(T < 1000)
    {
        while(T--)
        {
            long long L, R;
            int count;
            cin >> L >> R;
            int num1 = sqrt(Min(L,R));
            int num2 = sqrt(Max(L,R));
            count = num2 - num1 + 1;
            if(pow(num1,2) != Min(L,R))
            {
                count -= 1;
            }
            cout << count << endl;
        }
    }
    return 0;
}