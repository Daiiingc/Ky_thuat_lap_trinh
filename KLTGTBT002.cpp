#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    int T; 
    cin >> T;
    while (T--){
        int n;
        float x;
        float S = 0;
        float tu = 1;
        long long mau = 1;
        cin >> n >> x;
        for(int k = 1; k <= n; ++k)
        {
            tu = tu * x;
            mau = mau * k;
            S += tu / (float)mau;
        }
        cout << fixed << setprecision(3) << S << endl;
    }
    return 0;
}
