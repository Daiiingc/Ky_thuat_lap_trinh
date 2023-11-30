#include <bits/stdc++.h>
using namespace std;

int findMaxNumberInQueue(queue<string>& q) {

// Code
	int Max=INT_MIN;
    while(!q.empty()){
        string m=q.front();
        q.pop();
        int a=stoi(m);
        Max=max(a,Max);
    }
    return Max;
}

int main(void){
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
        cout<<findMaxNumberInQueue(q)<<endl;
        s.clear();
    }
    return 0;
}