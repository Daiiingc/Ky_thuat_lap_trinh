#include <bits/stdc++.h>
using namespace std;

int n, k;
int A[26], count_sum[500];
bool check[26];
int dem, sum;
vector<int> z;

void Input(void)
{
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> A[i];
	memset(check,0,sizeof(check));
    memset(count_sum,0,sizeof(count_sum));
	dem = 0, sum = 0;
}

void Try(int i)
{
	for(int j = i; j < n; j++)
	{
		if(check[j] == 0)
		{
			check[j] = 1;
			sum += A[j];
			k--;
			if(k == 0) z.push_back(sum);
			else Try(j+1);
			sum -= A[j];
			check[j] = 0;
			k++;
		}
	}
}

int main(void)
{
	int T;
	cin >> T;
	while(T--)
	{
		Input();
		Try(0);
        sum = INT_MAX;
        for(int i = 0; i < z.size(); i++)
        {
            sum = min(sum,z[i]);
            count_sum[z[i]]++;
        }
        cout << count_sum[sum] << endl;
		z.clear();
	}
}