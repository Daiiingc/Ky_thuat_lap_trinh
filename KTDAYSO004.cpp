#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// #define MAX 100000

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        /* Sử dụng Quy hoạch động
        int A[n], F[n];
        for(int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        int result = 1;
        for(int i = 1; i <= n; i++)
        {
            F[i] = 0;
            for(int j = i - 1; j > 0; j--)
            {
                if(A[j] < A[i])
                {
                    F[i] = max(F[i],F[j]);
                }
            }
            F[i] += 1;
            result = max(result,F[i]);
        }
        */ 
       vector <int> A(n);
       for(int &i: A) cin >> i;

       int result = 0;
       vector <int> b(n+1,INT_MAX);
       b[0] = INT_MIN;
       
       for(int i: A)
       {
            int k = lower_bound(b.begin(),b.end(),A[i]) - b.begin();
            b[k] = i;
            result = max(result,k);
       }
        
        cout << result << endl;
    }
    return 0;
}