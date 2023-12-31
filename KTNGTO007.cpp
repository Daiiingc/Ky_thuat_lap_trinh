#include <bits/stdc++.h>
using namespace std;

bool check(int x)
{
	if(x <= 3) return x>1;
	if(x % 2 == 0 || x % 3 == 0) return false;
	for(int i = 5; i*i <= x; i += 6)
	{
		if(x%i == 0 || x%(i+2) == 0)
		{
			return false;	
		}
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int L, R;
		cin  >> L >> R;
		if(L%2 == 0 && L != 2) L++;
		if(R%2 == 0 && R != 2) R--;
		
		for(int i = R; i >= L; i-=2)
        {
            if(check(i))
            {
                cout << i << endl;
                break;
            }
        }	
	}
}