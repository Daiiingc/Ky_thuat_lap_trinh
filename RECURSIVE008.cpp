#include<bits/stdc++.h>
using namespace std;
int a[100002];

// int sumOfPrimes(int start, int end) {
//     int S;
//     if(start > end)
//     {
//         return 0;
//     }
//     else
//     {
//         if(a[start] == 0)
//         {
//             S = start + sumOfPrimes(start + 1,end);
//         }
//         else
//         {
//             S += start + sumOfPrimes(start+1,end); 
//         }
//     }  
//     return S;

// }
void sang(){
    a[0]=a[1]=1;
    for(int i=2;i<=sqrt(100000);i++){
        if(a[i]==0){
            for(int j=i*i;j<=100000;j+=i){
                a[j]=1;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        sang();
        int sum=0;
        for(int i=n;i<=m;i++){
            if(a[i]==0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
}