#include <iostream>
using namespace std;

void Nhap_Mang(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cin >> arr[i];
    } 
}

void Kiem_Tra_Vi_Tri(int arr1[], int arr2[], int len1, int len2)
{   
    for(int i = 0; i < len2; i++)
    {
        bool flag = 0;
        int value = 0;
        for(int j = 0; j < len1 ; j++)
        {
            if(arr1[j] == arr2[i])
            {
                flag = 1;
                value = j + 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << value << " ";
        }
        else
        {
            cout << value << " ";
        }
    }
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    
    int a[n], b[m];
    Nhap_Mang(a,n);
    Nhap_Mang(b,m);
    Kiem_Tra_Vi_Tri(a,b,n,m);
}