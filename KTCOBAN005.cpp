#include <iostream>
using namespace std;

#define MOD 1000000007

long long power(long long n, long long k)
{
    if(k == 0) return 1;
    
    long long  res = power(n, k/2);
    if(k % 2 != 0) return ((res % MOD) * (res % MOD) * n) % MOD;
    return ((res % MOD) * (res % MOD)) % MOD;
}

long long powerStrings(string sa, string sb)
{
	long long a = 0, b = 0;

	for (int i = 0; i < sa.length(); i++)
		a = (a * 10 + (sa[i] - '0')) % MOD;

	for (int i = 0; i < sb.length(); i++)
		b = (b * 10 + (sb[i] - '0')) % (MOD - 1);
	return power(a, b);
}

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string sa, sb;
        cin >> sa >> sb;
        cout << powerStrings(sa,sb) << endl;
    }
}