#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string num;
        cin >> num;
        if(num[0] == '-')
        {
            cout << num.size() - 1 << endl;
        }
        else
        {
            cout << num.size() << endl;
        }
    }
}