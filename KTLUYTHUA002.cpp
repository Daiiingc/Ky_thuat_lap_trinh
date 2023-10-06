#include <iostream>

using namespace std;

const int MOD = 1000000007;

long long powerMod(long long a, long long n) {
    if (n == 0)
        return 1;

    long long res = 1;
    a = a % MOD;

    while (n > 0) {
        if (n & 1)
            res = (res * a) % MOD;

        a = (a * a) % MOD;
        n = n >> 1;
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, n;
        cin >> a;
        cin >> n;
        long long result = powerMod(a, n);
        cout << result << endl;
    }
    return 0;
}