#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n;i++)
		{
			cin >> a[i];
		}
		
		sort(a, a + n);
		
		int count = 0;
		for(int i = 0; i < n ;i++)
		{
			if(a[i] != a[i+1] && a[i] != a[i-1])
			{
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}