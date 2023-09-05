#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	int T;
	cin >> T;
	while(T--){
		int array_count[10] = {0};
		int a, b;
		cin >> a >> b;
		for(int i = min(a,b); i <= max(a,b); i++){
			s = to_string(i);
			for(int j = 0; j < s.size(); j++){
				array_count[(s[j] - '0')]++;
			}
			s = "";
		}
		for(int i = 0; i < 10; i++){
			cout << array_count[i] << " ";
		}
		cout << "\n";
	}
    return 0;
}
