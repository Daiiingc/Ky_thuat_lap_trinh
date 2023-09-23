#include <iostream>
#include <math.h> 
using namespace std;

bool Cap_So_Ban_Be(long long x, long long y)
{
    if(x==y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

long long Tong_Uoc_So(long long n)
{
    long long Sum = 1;
    for(long long i = 2; i <= sqrt(n); ++i)
    {
        if(i * i == n)
        {
            Sum += i;
        }
        else if(n % i == 0)
        {
            Sum += n/i;
            Sum += i;  
        }
    }
    return Sum;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long a, b;
        cin >> a >> b;
        if(Cap_So_Ban_Be(Tong_Uoc_So(a),b) == 1 && Cap_So_Ban_Be(Tong_Uoc_So(b),a) == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}