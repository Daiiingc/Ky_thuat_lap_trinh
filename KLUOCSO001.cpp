#include <iostream>
#include <math.h> 
using namespace std;

unsigned int Sum_Prime_Number(int n)
{
    int Sum = 1;
    for(int i = 2; i <= sqrt(n); ++i)
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
        int n;
        cin >> n;
        if(n > 1)
        {
            cout << Sum_Prime_Number(n) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}