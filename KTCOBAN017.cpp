#include <bits/stdc++.h>
using namespace std;

void result(int a[], int n)
{
    int best = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += a[j];
            if(sum > best)
            {
                best = sum;
            }
        }
    }
    cout << best << "\n";
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        result(a,n);
    }
    return 0;
}

// cách nhanh hơn

//COBAN017 - Dãy con liên tiếp tổng lớn nhất
// #include <bits/stdc++.h>
// using namespace std;

// void result(int arr[], int n) 
// {
//     int best = INT_MIN, sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum = max(arr[i], sum + arr[i]);
//         best = max(best, sum);
//     }
//     cout << best << "\n";
// }
// int main() {
//     int test;
// 	cin >> test;
// 	while(test--)
// 	{
// 		int n;
// 		cin >> n;
// 		int arr[n];
// 		for(int i = 0; i < n; i ++)
// 		{
// 			cin >> arr[i];
// 		}
// 		result(arr, n);
// 	}
// 	return 0;
// }