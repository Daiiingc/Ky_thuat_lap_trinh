/*
    số số 0 ở cuối của một giai thừa được tạo bởi việc nhân số 10 trong quá trình tính
    mặt khác 10 = 2 * 5 nên các số chia hết cho 2 và chia hết cho 5 được tách ra và tạo thành cặp số 2 và 5
    VD: 6! = 6*5*4*3*2*1 = 720 thì có 2,4,6 chia hết cho 2 nên tách ra ta có 4 số 2.
    Tương tự có 5 chia hết cho 5 nên tách ra có 1 số 5 => có 1 cặp (2,5)
    Vì số lượng số chia hết cho 5 ít hơn số lượng số chia hết cho 2 nên ta đếm các số chia hết cho để tìm ra
    số cặp (2,5) => số lượng số 0 ở cuối giai thừa
*/

#include <iostream>
using namespace std;
/* Cách thông thường
    int Count_number_5(long long number)
{
    int count = 0;
    for(long long i = 5; i <= number; i += 5)
    {
        long long temp = i;
        while(temp%5 == 0)
        {
            ++count;
            temp /= 5;
        }
    }
    return count;
}
*/
// Cách nhanh hơn
long long Count_number_5(long long number)
{
    long long count = 0;
    for(long long i = 5; i <= number; i *= 5)
    {
        count += number/i;
    }
    return count;
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        cout << Count_number_5(n) << endl;
    }
    return 0;
}