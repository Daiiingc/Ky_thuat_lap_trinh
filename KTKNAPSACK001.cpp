#include <bits/stdc++.h>
using namespace std;
#define ll long long

int knap_sack(int weight[], int value[], int n, int W) 
{
    int k[n + 1][W + 1];
    for (int i = 0; i <= n; i++) 
    {
        for (int w = 0; w <= W; w++) 
        {
            if (i == 0 || w == 0) 
            {
                k[i][w] = 0;
            }
            else if (w < weight[i - 1]) 
            {
                k[i][w] = k[i - 1][w];
            } 
            else 
            {
                k[i][w] = max(k[i - 1][w], value[i - 1] + k[i - 1][w - weight[i - 1]]);
            }
        }
    }
    return k[n][W];
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, W;
        cin >> n >> W;
        int weight[n], value[n];

        for (int i = 0; i < n; i++) 
        {
            cin >> weight[i];
        }

        for (int i = 0; i < n; i++) 
        {
            cin >> value[i];
        }

        int result = knap_sack(weight, value, n, W);
        cout << result << endl;
    }

    return 0;
}