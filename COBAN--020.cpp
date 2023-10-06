#include <bits/stdc++.h>
using namespace std;

void Solve(int n, int a[])
{
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
    {
        i--;
    }
    if(i <= 0)
    {
        for(int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        int k = n;
        while (a[k] < a[i])
        {
            k--;
        }
        swap(a[k],a[i]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main(void)
{
    int T; 
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int X[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> X[i];
        }
        Solve(n,X);
    }
    return 0;
}