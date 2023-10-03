#include<bits/stdc++.h>
using namespace std;

int result(int n, int i)
{
	int count = n - i*i;
    // cout << count << " " << n << " " << i << endl;
	if(count == 0) return 1;
	if(count < 0) return 0;
	return result(count, i) + result(n, i+1);
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << result(n, 1) << endl;
	}
}