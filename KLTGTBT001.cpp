#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int T; 
    cin >> T;
    while (T--)
    {
        int n;
        float x;
        cin >> n >> x;
        float tu = 1;
        int mau = 0;
        float S = 0;
        for(int k = 1; k <= n; ++k)
        {
            tu = tu * x;
            mau += k;
            S += tu/float(mau);
        }
        cout << fixed << setprecision(3) << S << endl;
    }
    return 0;
}