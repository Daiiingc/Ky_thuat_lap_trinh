#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> st;
        vector<char> v;
        for(int i=s.length()-1;i>=0;i--){
            st.push(s[i]);
        }
        int cnt,h=0;
        while(1){
           while(st.size()>0){
                int x=st.top();
                st.pop();
                if(x!='*'){
                   v.push_back(x);
                }else{
                  v.pop_back();
                }
              
           }
            cnt=v.size();
            if(h==cnt){
                break;
            }
            h=v.size();
            for(int i=v.size()-1;i>=0;i--){
                st.push(v[i]);
            }
             v.clear();
             
        }
             for(int i=0;i<v.size();i++){
                 cout<<v[i];
             }
             cout<<endl;
             v.clear();
             s.clear();
    }
             
           
}