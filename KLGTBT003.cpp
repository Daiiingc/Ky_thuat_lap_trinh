#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        float so_mu;
        float giai_thua = 1;
        float S = 0;
        for(int k = 1; k <= n; ++k)
        {
            giai_thua *= k;
            so_mu = 1.0/float(k + 1);
            S = pow(giai_thua + S, so_mu);
        }
        cout << fixed << setprecision(3) << S << " " << endl;
    }
    return 0;
}