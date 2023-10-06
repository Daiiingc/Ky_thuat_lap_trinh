#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		char s[8];cin>>s;
		int a[7],b[8];
		int cnt=0;
	    int l=0,r=strlen(s)-1;
	    for(int i=0;i<=r;i++){
	    	a[i]=s[i]-'0'; 
		} 
	    int biggest=INT_MIN;
//		cout << INT_MIN << endl; 
	    int i=0,h=0;
	    while(cnt<=k&&i<r){
	    	for(int j=i;j<=r;j++){
	           biggest=max(biggest,a[j]);
	           if(biggest==a[j]){
	           	  h=j;
			   }
			}
			int u=a[i];
			a[i]=biggest;
			a[h]=u;
			biggest=INT_MIN;
		
		i++;
		}
		for(int i=0;i<=r;i++){
			cout<<a[i]; 
		} 
		cout<<endl; 
	} 
}