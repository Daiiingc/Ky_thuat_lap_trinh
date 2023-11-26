#include <iostream>
using namespace std;

double myPow(double x, int n) {

    if(n == 0)
    {
        return 1;
    }
    return myPow(x,n-1) * x;

}

int main(void)
{
    int t;
    cin >> t;
    
    while (t--)
    {
        double x;
        int n;
        cin >> x >> n;
        if(n > 0)
        {
            cout << myPow(x,n) << endl;
        }
        else if(n < 0)
        {
            cout << myPow(1/x,-n) << endl;
        }
    }  
}