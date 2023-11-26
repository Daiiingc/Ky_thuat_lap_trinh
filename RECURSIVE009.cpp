#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1e9+7;
ll fib[100001];
void fibo(){
    fib[0]=0;
    fib[1]=1;
    for(int i = 2; i < 100000; i++){
        fib[i]=(fib[i-1]+fib[i-2])%mod;
    }
}
int main(){
    fibo();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fib[n] << endl;
    }
    return 0;
}