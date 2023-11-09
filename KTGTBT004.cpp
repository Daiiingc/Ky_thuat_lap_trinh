#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(void){
	int test;
	cin >> test;
	while(test--){
		int n;
		float x;
		cin >> n >> x;
		float S = 0.0;
		long long T = 1;
		for(int i=1 ; i<=n ; i++){
			T = T*x;
			S = sqrt(S + (float)T);
		}
		cout << fixed << setprecision(3) << S << endl;
	}
}

