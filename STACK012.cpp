#include<bits/stdc++.h>
using namespace std;

string create(string s){
    string result = "";
    stack<int>st;
    int n=1;
    for(char c:s){
        if(c=='D'){
            st.push(n);
            n++;
        }else if(c=='I'){
            st.push(n);
            n++;
            while(!st.empty()){
                result += to_string(st.top());
                st.pop();
            }
        }
    }
    st.push(n);
    while(!st.empty()){
        result+=to_string(st.top());
        st.pop();
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        cout << create(s) << endl;
    }
    return 0;
}