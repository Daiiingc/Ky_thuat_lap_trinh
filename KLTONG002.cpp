#include <iostream>
using namespace std;

long long Sum(long long min, long long max)
{
    long long count = max - min + 1;
    long long S = (count*(min + max))/2;
    return S;    
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long L, R;
        cin >> L >> R;
        cout << Sum(L,R) << endl;
    }
    return 0;
}