#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int Count_Number(long long num)
{
    int count = 0;
    while(num > 0)
    {
        num /= 10;
        count += 1;
    }
    return count;
}

long long Sum(int length, long long num)
{
    long long S = 0; 
    while (num > 0)
    {
        S += pow(num % 10,length);
        num /= 10;
    }
    return S;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n, armstrong_number;
        cin >> n;
        if(n == 0)
        {
            return 0;
        }
        int length = Count_Number(n);
        armstrong_number = Sum(length, n);

        if(n == armstrong_number)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}