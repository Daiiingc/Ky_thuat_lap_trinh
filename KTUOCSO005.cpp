#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

int main(void)
{
    
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long snt[MAX], so_luong[MAX] = {0};
        int index = 0;
        
        if(n % 2 == 0)
        {
            snt[index] = 2;
            
            while(n % 2 == 0)
            {
                so_luong[index]++;    
                n/=2;
            }
            index++;
        }

        for(long long i = 3; i <= sqrt(n); i += 2)
        {
            if(n % i == 0)
            {
                snt[index] = i;
                while(n % i == 0)
                {
                    so_luong[index]++;
                    n/=i;
                }
                index++;
            }
        }

        if(n>2)
        {
            snt[index] = n;
            so_luong[index]++;
            index++;
        }

        cout << index << '\n';
        
        for(int i = 0; i < index; i++)
        {
            if(so_luong[i] > 0)
            {
                cout << snt[i] << ' ' << so_luong[i] << '\n';
            }
            so_luong[i] = 0;
            snt[i] = 0;
        }
    }
    return 0;
}