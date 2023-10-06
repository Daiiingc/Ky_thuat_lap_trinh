#include <iostream>
#include <string>
using namespace std;


/*
    Sử dụng thuật toán quay lui
*/

#define MAX 16
int A[MAX];                     //lưu hoán vị vào mảng A
bool su_dung[MAX] = {0};        //Đánh dấu chưa có phần tử nào sử dụng hết  

void Xuat(int n)
{
    for(int i = 1; i <= n; i++) cout << A[i] << (i < n ? " " : "\n");
}

void Try(int k, int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(!su_dung[i])
        {
            A[k] = i;           // Lưu một phần tử vào hoán vị
            su_dung[i] = true;  //Đánh dấu đã dùng
            if(k == n)          //Kiểm tra nếu đã chứa một hoán vị thì xuất
            {
                Xuat(n);
            }
            else
            {
                Try(k+1,n);
            }
            su_dung[i] = false;
        }
    }
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Try(1,N);
    }
    return 0;
}