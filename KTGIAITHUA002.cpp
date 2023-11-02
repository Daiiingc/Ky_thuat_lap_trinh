// Binary search based CPP program to find
// numbers with n trailing zeros.
#include <bits/stdc++.h>
using namespace std;

// Function to calculate trailing zeros
unsigned long long trailingZeroes(unsigned long long n)
{
	unsigned long long cnt = 0;
	while (n > 0) {
		n /= 5;
		cnt += n;
	}
	return cnt;
}

void binarySearch(unsigned long long n)
{
	unsigned long long low = 0;
	unsigned long long high = pow(10,16); // range of numbers

	// binary search for first number with 
	// n trailing zeros
	while (low < high) {
		unsigned long long mid = (low + high) / 2;
		unsigned long long count = trailingZeroes(mid);
		if (count < n)
			low = mid + 1;
		else
			high = mid;
	}

	// Print all numbers after low with n
	// trailing zeros.
	cout << low << endl;
}

// Driver code
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		unsigned long long n;
		cin >> n;
		binarySearch(n);
	
	}
		return 0;
}