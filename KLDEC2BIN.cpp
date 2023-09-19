#include <iostream>
using namespace std;

#define MAX 100


void Decimal_To_Binary(int A[], long long n)
{
    int length = 0;
    while(n != 0)
    {
        A[length++] = n % 2;
        n /= 2;
    }
    for(int i = length - 1; i >= 0; i--)
    {
        cout << A[i];
    }
    cout << endl;
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        int array[MAX] = {0};
        cin >> n;
        Decimal_To_Binary(array,n);
    }
    return 0;
}