#include <bits/stdc++.h>
using namespace std;

typedef vector < int > bignumber; // định nghĩa biến bignumber để biểu diễn mảng chứa các chữ số của số nguyên

// Nạp chồng toán tử trích luồng, dùng để nhập vào số lớn.
istream &operator >> (istream &cin, bignumber &number)
{
    string s;
    cin >> s;

    number.clear();
    for (long long i = 0; i < s.size(); ++i)
        number.push_back(s[i] - '0');

    return cin;
}

// Nạp chồng toán tử chèn luồng, dùng để in ra số lớn.
ostream &operator << (ostream &cout, const bignumber &a) 
{
    for (auto d: a) 
        cout << d;

    return cout;
} 

// Viết thêm các số 0 ở đầu một số nguyên lớn a.
void add_zero(bignumber &a, long long sz) 
{	
    // Đảo ngược vector lại để tối ưu thời gian khi thêm số 0 vào.
    reverse(a.begin(),a.end()); 

    while (a.size() < sz) 
        a.push_back(0); 

    reverse(a.begin(), a.end());
}

// Xóa các số 0 vô nghĩa ở đầu một số nguyên lớn a.
void del_zero(bignumber &a) 
{ 	
    reverse(a.begin(), a.end()); 
	
    while (a.size() >= 2) 
    {
        if (a.back() == 0) 
            a.pop_back();
        else 
            break;
    }

    reverse(a.begin(), a.end());
}

// Cân bằng độ dài hai số a và b bằng cách thêm các số 0 vào đầu.
void change(bignumber &a, bignumber &b) 
{ 
    long long sz = max(a.size(), b.size());
    add_zero(a, sz);
    add_zero(b, sz);
}

// Nạp chồng toán tử chèn luồng, phép toán cộng.
bignumber operator + (bignumber a, bignumber b) 
{
    change(a, b);

    int sz = a.size();
    bignumber c;
	
    int carry = 0; 
    for (int i = sz - 1; i >= 0; --i) 
    {
        int x = a[i] + b[i] + carry;
        carry = x / 10; 
        x %= 10;
        c.push_back(x);
    }
	
    c.push_back(carry);
    reverse(c.begin(), c.end());
    del_zero(c);
	
    return c;
}

// Nạp chồng toán tử chèn luồng, nhân hai số lớn.
bignumber operator * (bignumber a, bignumber b)
{
    // Đảo ngược hai số trước để tiện tính toán.
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
	
    // Resize trước mảng kết quả. Kết quả của tích có thể đạt tới số chữ số  
    // bằng tổng độ dài của hai số ban đầu cộng lại và cộng thêm 1.
    bignumber c(a.size() + b.size() + 1);
    for (int i = 0; i < (int) a.size(); ++i)
        for (int j = 0; j < (int) b.size(); ++j)
        {
            c[i + j] += (a[i] * b[j]);
            c[i + j + 1] += (c[i + j] / 10);
            c[i + j] %= 10;
        }

    // Xử lý nốt phần giá trị nhớ chưa được cộng hết.
    // Mảng c hiện tại đang là mảng kết quả bị đảo ngược.
    c.push_back(0);
    for (int i = 0; i < (int) c.size() - 1; ++i) 
    {
    	c[i + 1] += (c[i] / 10);
    	c[i] %= 10;
    }

    // Đảo ngược mảng c và xóa các chữ số 0 vô nghĩa ở đầu, ta sẽ thu được tích a * b.
    reverse(c.begin(), c.end());
    del_zero(c);
	
    return c;
}

int main()
{
    // Khi nhập xuất thì khai báo biến kiểu vi và dùng trực tiếp lệnh cin, cout.
    bignumber a, b;

    ifstream input("bignumber.in");
    ofstream output("bignumber.out");

    int test;
    input >> test;
    while(test--)
    {
        char dau;
        input >> a;
        input >> dau;
        input >> b;
        
        if(dau == '+')
        {
            output << a + b << endl;        // Cộng hai số lớn
        }
        else if(dau == '*')
        {
            output << a * b << endl;        // Nhân hai số lớn
        }

    }
    input.close();
    output.close();
    return 0;
}


