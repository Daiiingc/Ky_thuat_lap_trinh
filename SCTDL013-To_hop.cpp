#include<iostream>
using namespace std;

int a[11]; 
bool ok;

void ktao(int x){
	for(int i = 1; i <= x; i++){
		a[i] = i;
	} 
}
void sinh(int n, int k){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i; 
	} 
	if(i == 0){
		ok = 0;
	}else{
		a[i]++;
		for(int j = i + 1;j <= k; j++){
			a[j] = a[j-1] + 1; 
		}
	} 
} 

int main(){
	int t;
    cin >> t;
	while(t--){
        int n, k; 
        cin >> n >> k;
        ok = 1;
        ktao(k);
        while(ok){
            for(int i = 1; i <= k; i++){
                cout << a[i];
            }
            cout << " ";
		    sinh(n,k);
        }
        cout << endl;
    }
    return 0;
}