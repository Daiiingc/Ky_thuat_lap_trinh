#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s,' ');
        int k; cin>>k;
        cin.ignore();
        queue<string> q;
        vector<string> v;
        stringstream ss(s);
        string tmp;
        reverse(s.begin(),s.end()); 
        int u=0; 
        string a; 
        while(getline(ss,tmp,',')){
            q.push(tmp);
            if(u==0){
            	a=tmp; 
			} 
			u=1; 
        }
        
        int cnt=0;
        while(cnt!=k){
            v.push_back(q.front());
            q.pop();
            cnt++; 
        } 

	    for(int i=v.size()-1;i>=0;i--){
            cout<<v[i];
            if(i != 0)
            {
	    	    cout<<',';
            }
	    	    
		}
        
        while (!q.empty()) 
        { 
            cout << ',' << q.front(); 
            q.pop(); 
        } 
        cout << '\n'; 
    }
}