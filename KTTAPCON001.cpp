#include <iostream>
#include <map>
#include<cstdlib>

using namespace std;

const int N = 1e6;

int a[N];

int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		map<int, int> cnt;
		for(int i = 0; i < n;i++){
			cin >> a[i];
		}
		qsort(a, n, sizeof(int), compare);
		for(int i = 0; i < n;i++){
			cnt[a[i]]++;
		}
		int ways = 1;
		for (std::map<int, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
			ways *= (it->second + 1);
		}
		std::cout << ways - 1 << ' ';
		cout << '[';
		for(int i = 0; i < n;i++){
			cout << a[i];
			if(i != n-1)
				cout << ',' << ' ';
		}
		cout << ']' <<  endl;
	}
}