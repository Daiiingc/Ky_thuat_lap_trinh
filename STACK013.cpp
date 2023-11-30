#include<bits/stdc++.h>
using namespace std;

string remake(string path){
    string dir;
    stack<string>st;
    istringstream iss(path);
    while(getline(iss, dir,'/')){
        if(dir==".."){
            if(!st.empty()){
                st.pop();
            }
        }else if(dir != "." && !dir.empty()){
                st.push(dir);
        }
    }
    string result;
    while(!st.empty()){
        result = "/"+ st.top() + result;
        st.pop();
    }
    return result.empty()?"/":result;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << remake(s) << endl;
    }
    return 0;
}