#include <iostream>
#include <cstring>
using namespace std;

void binaryNum(int n, string s, int ones, int zeros) {
	if (s.length() == n) {
		cout << (s) << ' ';
		return;
	}
	if (ones < n / 2)
		binaryNum(n, s + "1", ones + 1, zeros);
	if (zeros < n / 2)
		binaryNum(n, s + "0", ones, zeros + 1);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s = "";
		int n;
		cin >> n;
		if (n % 2 == 0) {
			binaryNum(n, s, 0, 0);
			cout << endl;
		}
		else cout << "-1" << endl;
	}
	return 0;
}