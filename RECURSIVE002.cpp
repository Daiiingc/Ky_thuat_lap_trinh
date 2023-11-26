#include <iostream>
using namespace std;

int factorial(int n) {

    if(n == 0 )
    {
        return 1;
    }
    return factorial(n-1) * n;

}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;   
        cout << factorial(n) << endl;
    }
    
}