#include"bits/stdc++.h"
using namespace std;
string remake(string s){
	stack<char>st;
	for(int i = 0; i<s.length(); i++){
		// khi gap '[' thi chung ta bat dau giai ma
		if(s[i]==']'){
			string temp;
			while(!st.empty()&&st.top()!='['){
				temp = st.top() + temp;// lam the nay de cai chuoi 0 bi dao 
				st.pop();
			}
			// xoa '[' khoi stack
			st.pop();
			string num;
			//xoa digit khoi stack
			while(!st.empty()&&isdigit(st.top())){
				num = st.top()+num;
				st.pop();
			}
			int number = stoi(num);
			string repeat;
			for(int j = 0; j < number ; j++){
				repeat+=temp;
			}
			for(char c: repeat){
				st.push(c);
			}
		}else{ // neu s[i] eo co ] , push s[i] vo stack
			st.push(s[i]);
		}
	}
	string res;
	while(!st.empty()){
		res = st.top() + res;
		st.pop();
	}
	return res;
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
