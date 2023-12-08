#include<bits/stdc++.h>
using namespace std;
#define MAX 105
int A[MAX][MAX],dp[MAX][MAX];
int duong_di_lon_nhat(int A[][MAX],int n,int m)
{
	for(int i=0;i<m;i++)
    {
		dp[i][0]=A[i][0];
	}
	for(int j=1;j<n;j++)
    {
		for(int i=0;i<m;i++)
        {
			int val=dp[i][j-1];
			if(i>0)
            {
				val=max(val,dp[i-1][j-1]);
			}
			if(i<m-1)
            {
				val=max(val,dp[i+1][j-1]);
			}
			dp[i][j]=A[i][j]+val;
		}
	}
	int res=INT_MIN;
	for(int i=0;i<m;i++)
    {
		res=max(res,dp[i][n-1]);
	}
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int m,n;
		cin>>m>>n;
		for(int i=0;i<m;i++)
        {
			for(int j=0;j<n;j++)
            {
				cin>>A[i][j];
			}
		}
		cout<<duong_di_lon_nhat(A,n,m)<<"\n";
	}
}