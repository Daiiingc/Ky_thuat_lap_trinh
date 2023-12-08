#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

ll prime_sum(ll N){
    vector<ll> prime(N+1, 0); // Initialize the vector with zeros
    ll sum = 0;
    ll max = N / 2; 
    for (ll p=2; p<=max; p++){
        if (prime[p] == 0){
            for (ll i=p*2; i<=N; i += p)
                prime[i] = p;
        }
    }
    for (ll p=2; p<=N; p++){
        if (prime[p])           //Neu p khong phai so nguyen to, prime[p] tr? v? th?a s? nguy?n t? max
             sum += prime[p];     
        else                    //Neu p la so nguyen to
             sum += p;                  
    }  
    return sum;     
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll N;
        cin >> N;
        cout << prime_sum(N) << endl;
    }
    return 0;
}
