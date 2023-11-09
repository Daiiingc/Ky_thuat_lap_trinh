#include <iostream>
using namespace std;

int Result(int k, int S)
{
    if(S == 3*k) return 1;
    int count = 0;
    for(int i = 0; i <= k; i++)
    {
        int min_value = min(S-i,k); 
        for(int j = 0; j <= min_value; j++)
        {
            unsigned int n = S - i - j;
            if(n <= k)
            {
                count++;
            }
        }
    }
    return count;
}


int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int k, S;
        cin >> k >> S;
        cout << Result(k,S) << endl;
    }
}