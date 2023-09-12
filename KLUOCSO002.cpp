#include <iostream>
#include <math.h> 
using namespace std;

bool Is_Prime_Number(int num)
{  
    if(num == 1)
    {
        return false;
    }

    for(int i = 2; i <= sqrt(num); ++i)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Tìm ước số của một số
int Count_Divisor(long long n)
{
    int count = 0;


    for(int i = 1; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
        {
            if(Is_Prime_Number(i) == 1)
            {
                count += 1;
            }
            if(i * i != n && Is_Prime_Number(n/i) == 1)
            {
                count += 1;
            }
        }
    }
    return count;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        cout << Count_Divisor(n) << endl;
    }
}