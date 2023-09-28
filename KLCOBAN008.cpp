#include <iostream>
#include <string>
using namespace std;

// quy định num1 có số lượng phần tử lớn hơn num2
void Add(string num1, string num2)
{
    int x[num1.size()], y[num1.size()], value[num1.size() + 1];
    for(int i = 0; i < num1.size(); i++)
    {
        x[i] = num1[num1.size() - 1 - i] - '0';
    }
    
    for(int i = 0; i < num1.size(); i++)
    {
        y[i] = num2[num2.size() - 1 - i] - '0';
        if(i >= num2.size())
        {
            y[i] = 0;
        }
    }

    int carry = 0;      // Biến nhớ 
    int n = 0;          // Biến đếm giá trị phần tử trong mảng
    for(int i = 0; i < num1.size(); i++)
    {
        int temp = x[i] + y[i] + carry;
        value[n++] = temp%10;
        carry = temp/10;
    }
    if(carry)
    {
        value[n++] = carry;
    }

    for(int i = n - 1; i >= 0; i--)
    {
        cout << value[i];
    }
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        if(a.size() >= b.size())
        {
            Add(a,b);
        }
        else
        {
            Add(b,a);
        }
        cout << endl;
    }
    return 0;
}