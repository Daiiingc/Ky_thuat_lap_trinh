#include <iostream>
#include <math.h>
using namespace std;

int So_Cach_BD(int n, int k)
{
    if(n == 0) return 1;
    if(k == 0) return 1;

    if(n >= pow(2,k))
    {
        int current_value = pow(2,k);
        return So_Cach_BD(n - current_value,k) + So_Cach_BD(n,k-1);
    }
    else
    {
        return So_Cach_BD(n,k-1);
    }
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = log2(n);
        cout << So_Cach_BD(n,k) << endl;
    }
    
}