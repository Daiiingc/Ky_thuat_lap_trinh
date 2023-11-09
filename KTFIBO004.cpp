#include <iostream>
#include <cmath>
using namespace std;

// A utility function that returns true if x is perfect square
bool isPerfectSquare(long long x)
{
	long long s = sqrt(x);
	return (s * s == x);
}

// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(long long n)
{
	// n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or
	// both is a perfect square
	return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

void Result(int n)
{
    bool check = false;

    for(int i = 0; i <= n-i; i++)
    {
        if(isFibonacci(i) && isFibonacci(n-i))
        {
            check = true;
            cout << i << ' ' << n-i;
            break;
        }
    }
    if(check == false) cout << -1;
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        Result(n);
        cout << endl;
    }
    return  0;
}
