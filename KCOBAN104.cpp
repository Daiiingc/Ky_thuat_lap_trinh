#include <bits/stdc++.h>

using namespace std;

int Change_Num3_To_Num5(int num)
{
    int new_num = num;
    int index = 0;
    while(num != 0)
    {
        if(num % 10 == 3)
        {
            new_num += 2 * pow(10,index);
        }
        num /= 10;
        index += 1;
    }
    return new_num;
}

int Change_Num5_To_Num3(int num)
{
    int new_num = num;
    int index = 0;
    while(num != 0)
    {
        if(num % 10 == 5)
        {
            new_num -= 2 * pow(10,index);
        }
        num /= 10;
        index += 1;
    }
    return new_num;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b;
        cin >> a >> b;
        if(a > 0 && b > 0)
        {
            cout << Change_Num5_To_Num3(a) + Change_Num5_To_Num3(b);
            cout << " ";
            cout << Change_Num3_To_Num5(a) + Change_Num3_To_Num5(b);
        }
        cout << endl;
    }
    return 0;
}
