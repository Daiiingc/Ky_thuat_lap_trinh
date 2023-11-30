#include <string>
#include <stack>
#include <iostream>
using namespace std;


string reverseParentheses(string s) {
    int n = s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(s[i] !=')'){
            st.push(s[i]);
        }
        else{
            string temp;
            while(st.top() != '('){
                temp+=st.top();
                st.pop();
            }
            st.pop();
            for(int j=0;j<temp.length();j++){
                st.push(temp[j]);
            }
        }
    }
    string ans;
    while(!st.empty()){
        ans= st.top()+ans;
        st.pop();
    }
    return ans;
}

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << reverseParentheses(s) << endl;
    }
}