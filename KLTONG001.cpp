#include <iostream>
using namespace std;

long long Sum(int x, int y)
{
    long long S = 0;
    long long count_odd_number;   // Đếm số lẻ nằm trong đoạn [x,y] 
    long long middle_number;      // TÌm số chỉnh giữa đoạn [x,y]
    if(x % 2 == 0)          
    {
        x += 1; 
    }
    if(y % 2 == 0)
    {
        y -= 1;
    }
    if(x <= y)
    {
	    count_odd_number = ((y-x)/2) + 1;
    	middle_number = (x+y)/2;
    	S = count_odd_number * middle_number;        
    }
    return S;
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int L, R;
        cin >> L >> R;
		cout << Sum(L,R) << endl;
    }
    return 0;
}