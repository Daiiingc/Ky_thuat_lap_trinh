// #include <iostream>
// using namespace std;

// unsigned long long power(unsigned long long n, unsigned long long k)
// {
//     unsigned long long res = 1;
//     while(k)
//     {
//         if (k & 1) res = res * n;
//         k = k / 2;
//         n = n * n;
//     }
//     return res;
// }

// unsigned long long powerStrings(string sa, string sb)
// {
// 	unsigned long long a = 0, b = 0;

// 	for (int i = 0; i < sa.length(); i++)
// 		a = (a * 10 + (sa[i] - '0'));

// 	for (int i = 0; i < sb.length(); i++)
// 		b = (b * 10 + (sb[i] - '0'));
// 	return power(a, b);
// }

// int main(void)
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         unsigned long long n;
//         int k;
        
//         int m;
//         cin >> n >> k >> m;
//         string sa = to_string(n);
//         string sb = to_string(k);

//         string s = to_string(powerStrings(sa,sb));
//         for(int i = 0; i < m; i++)
//         {
//             cout << s[i];
//         }
//         cout << endl;
//     }
// }


// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// // Function to find a^b modulo M
// ll modPower(ll a, ll b, ll M)
// {
// 	ll res = 1;
// 	while (b) {
// 		if (b & 1)
// 			res = res * a % M;
// 		a = a * a % M;
// 		b >>= 1;
// 	}
// 	return res;
// }

// Function to find the first and last
// M digits from N^K
void findFirstAndLastM(ll N, ll K, ll M)
{
	// Calculate Last M digits

	// Calculate First M digits
	ll firstM;

	double y = (double)K * log10(N * 1.0);

	// Extract the number after decimal
	y = y - (ll)y;

	// Find 10 ^ y
	double temp = pow(10.0, y);

	// Move the Decimal Point M - 1 digits forward
	firstM = temp * (1LL) * pow(10, M - 1);

	// Print the result
	cout << firstM <<endl;
}

// Driver Code
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
	ll N, K, M;
	cin >> N >> K >> M;
	findFirstAndLastM(N, K, M);
	}
	return 0;
}