#include <bits/stdc++.h>
using namespace std;

int n, cot[100], cheo_chinh[100], cheo_phu[100], dem=0;

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(cot[j] == 0 && cheo_chinh[i-j+n] == 0 && cheo_phu[i+j-1] == 0)
		{
			cot[j] = 1; 
			cheo_chinh[i-j+n] = 1; 
			cheo_phu[i+j-1] = 1;
			
			if(i == n)
			{
				dem++; 
			}
			else
			{
				Try(i+1);
			}
			cot[j] = 0; 
			cheo_chinh[i-j+n] = 0; 
			cheo_phu[i+j-1] = 0;
		}
		
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		Try(1);
		cout << dem << endl;
		dem = 0;
	}
}