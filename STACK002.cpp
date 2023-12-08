#include"bits/stdc++.h"
using namespace std;

string xoa_ngoac_ngoai(string s)
{
    stack<char>st;
    string result ="";
    string chuoi_nguyen_thuy="";
    for(char c:s)
    {
        if(c=='(')
        {
            st.push(c);
        }
        else if(c==')')
        {
            st.pop();
        }
        chuoi_nguyen_thuy+=c;
        if(st.empty())
        {
            result+=(chuoi_nguyen_thuy.substr(1,chuoi_nguyen_thuy.length()-2));
            chuoi_nguyen_thuy="";
        }
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << xoa_ngoac_ngoai(s) << endl;
    }
    return 0;
}