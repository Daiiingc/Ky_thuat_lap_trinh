#include <iostream>
using namespace std;

void Sang_So_Nguyen_To(bool arr[], int length)
{
// Thuật toán sàng nguyên tố
// Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for(int i = 3; i <= length; i++)
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

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int L, R;
        cin >> L >> R;
        if(L > R)
        {
            int temp = L;
            L = R;
            R = temp;
        }
        bool check[R + 1] = {false};
        check[2] = true;
        for(int i = 3; i <= R; i += 2)
        {
            check[i] = true;
        }
        Sang_So_Nguyen_To(check,R);
        int count = 0;                  // biến đếm số lượng SNT
        for(int i = L; i <= R; i++)
        {
            if(check[i] == true)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}