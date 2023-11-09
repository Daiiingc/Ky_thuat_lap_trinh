#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> st;
		vector<char> v; 
	    for(int i=s.length()-1;i>=0;i--){
	    	st.push(s[i]); 
		}
		int cnt;
		int h=0; 
		while(1){ 
			while(st.size()>1){
	    	char x=st.top();            // lay dinh stack ra 
			v.push_back(x);                   // cho dinh stack vo vector 
			st.pop();                        //xoa cai x trong stack 
		    if(x-32==st.top()||x+32==st.top()){
		    	st.pop();                 //if 1 chu cai thuong va 1 chu cai in hoa cua chu cai thuong do dung canh nhau thi xoa dinh stack 
		    	v.pop_back();             //xoa luon phan tu cuoi vector 
			}
		}  
		   if(!st.empty()){
		   	 v.push_back(st.top());      //neu stack van con 1 phan tu thi them vo vector r xoa ra khoi stack 
		     st.pop();
		   } 
		   cnt=v.size(); 
		   if(cnt==h) break;   /*cnt va h de danh dau xem sau moi lan duyet thi size vector có bi thay doi ko, neu van giu nguyen thi vector truoc do
		                        da la chuoi dep   */
		   h=v.size();
		   for(int j=v.size()-1;j>=0;j--){
				st.push(v[j]);                //neu cnt!=h thi cho tung phan tu vector lai stack duyet tiep. 
		    }  
		    v.clear(); 
		} 
		for(int i=0;i<v.size();i++){
			cout<<v[i]; 
		} 
		cout<<endl;
		s.clear();
		v.clear(); 
	} 
}