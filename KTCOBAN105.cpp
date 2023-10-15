#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

/*ý tưởng: Với các n sợi dây, ta sẽ ưu tiên lấy 2 sợi dây có độ dài nhỏ nhất để ghép vào.
           Sau khi ghép, ta tiếp tục thực hiện việc trên cho đến khi nó thành 1 sợi dây
           Từ đó t xác định được thời gian nhỏ nhất thực hiện bằng tổng thời gian các lần nối 2 dây nhỏ nhất
*/

// Priority Queue là một cấu trúc dữ liệu mà các phần tử được quản lý sẽ có “độ ưu tiên” khác nhau gắn với từng phần tử. 
// Phần tử có thứ tự ưu tiên cao hơn trong Priority Queue sẽ được xếp lên trước và truy vấn trước.
priority_queue <int, vector<int>, greater<int>> q;

void Nhap_Mang(int arr[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        q.push(arr[i]);
    }
}

void Solve(long long &result)
{
    while(!q.empty())
    {
        int x = q.top();
        q.pop();
        if(q.empty() == 1)
        {
            break;
        }
        int y = q.top();
        q.pop();
        int sum = (x + y) % MOD;
        result = (result + sum) % MOD;
        q.push(sum);
    }
}

int main(void)
{

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        long long result = 0;
        cin >> N;
        int c[N]; // mảng chứa N phần tử
        Nhap_Mang(c,N);
        Solve(result);
        cout << result << endl;
    }
    return 0;
}