#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        queue<string> q;
        stringstream ss(s);
        string tmp;
        while(getline(ss,tmp,',')){
            q.push(tmp);
        }
        int Min=INT_MAX;
        while(!q.empty()){
            string m=q.front();
            q.pop();
            int a=stoi(m);
            Min=min(a,Min);
        }
        cout<<Min<<endl;
        s.clear();
    }
}