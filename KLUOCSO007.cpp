#include <iostream>
#include <math.h>
using namespace std;

/*
    xác định lần lượt ước số của n
    nếu m chia hết cho ước số của n thì bỏ qua, còn không thì tính tổng với ước số đó
*/
long long Solve(long long num1, long long num2)
{
    long long Sum = 0;
    for(int i = 1; i <= sqrt(num1); i++)
    {
        if(num1%i == 0)
        {
            if(num2%i != 0)
            {
                Sum += i; 
            }
            if(i*i != num1 && num2%(num1/i) != 0)
            {
                Sum += num1/i;
            }
        }
    }
    return Sum;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n, m;
        cin >> n >> m;
        cout << Solve(n,m) << endl;
    }
    return 0;
}