#include<iostream> 
using namespace std;

bool isArithmeticProgression(long long a[], int n) {
    if(n == 2 || n == 1)
    {
        return true;
    }
    else
    {
        int d = a[1] - a[0];
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] != d) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int n;cin>>n;
    	long long a[n]; 
    	for(int i = 0; i < n; i++)
    	{
        	cin >> a[i];
   	 	}
    	if (isArithmeticProgression(a, n)) {
        	cout << "YES" << endl;
    	} else {
        	cout << "NO" << endl;
    	}
    }
  return 0;
}