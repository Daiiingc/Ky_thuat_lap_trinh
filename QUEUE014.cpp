#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1,' ');
        getline(cin,s2);
        queue<char> q1;
        queue<char> q2;
        if(s1.size()!=s2.size()){
            cout<<0<<endl;
            s1.clear();
            s2.clear();
            continue;
        }
        for(int i=s1.size()-1;i>-1;i--){
            q1.push(s1[i]);
            q2.push(s2[i]);
            if(q1.front()!=q2.front()){
                cout<<0<<endl;
                s1.clear();
                s2.clear();
                break;
            }else{
                q1.pop();
                q2.pop();
            }
        }
            if(!q1.empty()||!q2.empty()){
                continue;
            }
            cout<<1<<endl; 
            s1.clear();
            s2.clear();
    }
}