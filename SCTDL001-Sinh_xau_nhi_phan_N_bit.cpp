#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" "; 
	} 
	cout<<endl; 
} 
void Try(int i){
	for(int j=0;j<2;j++){
		a[i]=j;
		if(i==n){
			in(); 
		} 
		else{
			Try(i+1); 
		} 
	} 
} 
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		Try(1); 
	} 
}