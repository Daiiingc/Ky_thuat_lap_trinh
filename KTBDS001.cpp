#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007

int Count(int n)
{
    vector <int> dp(n+1,0);
    dp[0] = 1;
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            dp[j] = (dp[j] + dp[j-i]) % MOD;
        }
    }
    return dp[n];
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Count(n) << endl;
    }
    return 0;
}