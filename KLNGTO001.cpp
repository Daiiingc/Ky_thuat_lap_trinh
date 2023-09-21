#include <iostream>
#include <math.h>
using namespace std;

void Sang_So_Nguyen_To(bool arr[], int length)
{
// Thuật toán sàng nguyên tố
// Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for(int i = 2; i <= length; i++)
    {
        if (arr[i] == true)
        {
            for(int j = 2 * i; j <= length; j += i)
            {
                arr[j] = false;
            }
        }
    }
}

// bool Is_Prime_Number(int num)
// {  
//     if(num == 1 || num == 0)
//     {
//         return false;
//     }

//     for(int i = 2; i <= sqrt(num); ++i)
//     {
//         if(num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int Count_Prime_Number(bool Prime_array[], int length)
{
    int count = 0;
    int temp;
    for(int i = 2; i <= length; i++)
    {
        bool flag = 1;
        if(Prime_array[i] == true)
        {
            temp = i;
            while(temp != 0)
            {
                if(temp%10 != 2 && temp%10 != 3 && temp%10 != 5 && temp%10 != 7)
                {
                    flag = 0;
                    break;
                }
                temp /= 10;
            }
            if(flag == 1)
            {
                count++;
            }
        }
    }
    return count;
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        bool check[n + 1];
        for (int i = 2; i <= n; i++)
        {
            check[i] = true;
        }
        Sang_So_Nguyen_To(check,n);
        cout <<  Count_Prime_Number(check,n) << endl;
    }
    return 0;
}
