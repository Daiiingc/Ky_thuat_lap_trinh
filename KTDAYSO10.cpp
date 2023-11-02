#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, L; // N: Số đại biểu tham dự, L: vị trí bắt đầu
        cin >> N >> L;
        
        L += N - 1;
        unsigned long long S = L;
        for(int i = 0; i < N-1; i++)
        {
            int t; cin >> t;
            S += --L;
            S -= t;
        }
        cout << S << endl;
    }
    
}