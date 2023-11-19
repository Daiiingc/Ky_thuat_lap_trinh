#include <iostream>
using namespace std;

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}


int main(void)
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count = 3, S = 0;
        while(count)
        {
            int num = fibonacci(count); 
            if(num <= n)
            {
                if(num % 2 == 0) S += num;
            }
            else
            {
                break;
            }
            count++;
        }
        
        cout << S << endl;
    }
}