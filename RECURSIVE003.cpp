#include <iostream>
using namespace std;

bool isPowerOfFour(long long n)
{

    if(n % 4 >= 1 && n > 4)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    return isPowerOfFour(n/4);
}

int main(void)
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        cin >> n;   
        cout << isPowerOfFour(n) << endl;
    }
    
}