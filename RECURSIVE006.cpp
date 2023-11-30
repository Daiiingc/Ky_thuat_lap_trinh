#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long fastPow(long long base, long long exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        long long half_pow = fastPow(base, exp / 2);
        return (half_pow * half_pow) % MOD;
    } else {
        return (base * fastPow(base, exp - 1)) % MOD;
    }
}

int countGoodNumbers(long long n) {
    if (n == 1) return 5;
    if (n % 2 == 0) {
        long long even_count = fastPow(5, n / 2);
        long long prime_count = fastPow(4, n / 2);
        return (even_count * prime_count) % MOD;
    } else {
        long long even_count = fastPow(5, n / 2);
        long long prime_count = (fastPow(4, n / 2) * 5) % MOD;
        return (even_count * prime_count) % MOD;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << countGoodNumbers(n) << endl;
    }
    return 0;
}