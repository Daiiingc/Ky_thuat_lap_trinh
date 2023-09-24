#include <iostream>
#include <math.h>
using namespace std;

/*
Sử dụng thuật toán phân tích thừa số nguyên tố
Khi đó ta thấy một số nguyên tố có thể xuất hiện nhiều hơn 1 lần
thì tích các thừa số nguyên tố xuất hiện nhỏ hơn n 
Nếu mỗi thừa số nguyên tố chỉ xuất hiện 1 lần thì tích thừa số nguyên tố = n
*/ 
bool solve(long long n){
	if(n<=2){
		return 0;
	}else{
		for(int i = 2; i<=sqrt(n);i++){
			if(n%i==0){
				int d = 0;
				while(n%i==0){
					d++;
					n/=i;
				}
				if(d > 1){
					return 1;
				}
			}
		}
		return 0;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(solve(n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
