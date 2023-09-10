#include <iostream>
#include <math.h>
using namespace std;


void Check_Perfect_Number(long long n)
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
        if(Sum > n)
        {
            break;
        }
    }
    
    if(Sum == n)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        if(n > 1)
        {
        	Check_Perfect_Number(n);   
        }
        else
        {
            cout << 0 << endl;   
        }
        
    }
    return 0;
}