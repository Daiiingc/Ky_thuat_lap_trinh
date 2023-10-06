#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, L; // N: Số đại biểu tham dự, L: vị trí bắt đầu
        cin >> N >> L;
        int A[N];
        for(int i = 1; i <= N - 1; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        for(int i = 1; i <= N - 1; i++)
        {
            if(A[i] - L + 1 != i)
            {
                cout << i + L - 1 << endl;
                break;
            }
            
        }

    }
    
}