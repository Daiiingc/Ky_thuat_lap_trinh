#include <iostream>
using namespace std;

/*
    Cách làm: sử dụng quy hoạch động trong C++
    Tạo một mảng chứa lần lượt từng chữ số của kết quả giai thừa
    
    Đơn giản: mỗi phần tử của mảng chứa 1 chữ số của giai thừa
    Khi in mảng thì in từng phần tử của mảng thì chiều ngược lại
    
    Tối ưu hơn: mỗi phần tử của mảng chứa k chữ số của giai thừa 
    Lưu ý: khi in mảng cần lấy làm tròn 0k lần của phần tử đấy ngoại trừ phần tử cuối cùng
*/

void Factorial_Of_Number(int number)                        // tính giai thừa của một số tự nhiên
{
    int array_num[50000];                                   // mảng chứa kết quả của giai thừa, mỗi phần tử chứa 4 chữ số
    int carry = 0, tich;                                    // biến nhớ trong quá trình tính
    int length = 1;                                         // độ dài của mảng
    array_num[0] = 1;
    for(int i = 2; i <= number; ++i)                        
    {
        for(int j = 0; j < length; ++j)                     // tính giá trị của từng vị trí trong mảng
        {
            tich = array_num[j] * i + carry;
            carry = tich / 10000;
            array_num[j] = tich % 10000;
        }

        while(carry > 0)
        {
            array_num[length] = carry % 10000;
            length += 1;
            carry /= 10000; 
        }
    }

    if(length > 1)                                          // in giá trị đảo ngược của mảng 
    {
        printf("%d", array_num[length - 1]);
        for(int i = length - 2; i > 0; i--)                         
        {
            printf("%04d", array_num[i]);
        }
        printf("%04d\n", array_num[0]);   
    }
    else
    {
        printf("%d\n", array_num[0]);
    }
     
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if(n >= 0)
        {
            Factorial_Of_Number(n);
        }
    }
    return 0;
}
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Nhan tung chu so cua num cho mot so nguyen duong
vector<int> multiply(vector<int>& num, int x) {
    vector<int> result;
    int carry = 0;
    for (int i = 0; i < num.size(); ++i) {
        int prod = num[i] * x + carry;
        result.push_back(prod % 10);
        carry = prod / 10;
    }
    while(carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    return result;
}

// Tinh giai thua
vector<int> factorial(int n) {
    vector<int> result;
    result.push_back(1); // Giai thua cua 0 là 1
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    reverse(result.begin(), result.end());
    return result;
}

// In ket qua giai thua
void printFactorial(vector<int>& num) {
    for (int i = 0; i <=num.size() - 1; i++) {
        cout << num[i];
    }
    cout << endl;
}

int main() {
    int T; 
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> result = factorial(n);
        printFactorial(result);
    }
    return 0;
}
*/

