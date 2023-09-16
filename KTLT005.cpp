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
        double x;
        cin >> n >> x;
        double tu = 1;
        double mau = 0;
        double S = 0;
        for(int k = 1; k <= n; ++k)
        {
            tu = tu * x;
            mau += k;
            S += tu/mau;
        }
        cout << fixed << setprecision(3) << S << endl;
    }
    return 0;
}