#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n==0||n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
    	if(n%i==0)
    return false;}
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int check1 =0;
        while(n>1){
        	for(int i=1;i<sqrt(n);i++){
        		if(n%i==0&&check(n/i)==true){
        			check1 =1;
        			cout<<n<<endl;
        			break;
				}
			}
			if(check1==1)
				break;
        	n--;
				
		}
	}
}