#include<bits/stdc++.h>

using namespace std;

int main(void)
{   
    freopen("password.in", "r", stdin);
    freopen("res.out", "w", stdout);
    
    string password;
    while(cin >> password)
    {
        bool test1 = false;
        bool test2 = false;
        bool test3 = false;
        bool test4 = false;
        bool test5 = true;
        
        // Kiểm tra độ dài mật khẩu
        if(password.size() < 8)
        {
            cout << "INVALID" << endl;
            
        }
        else
        {
            for(long long i = 0; i < password.size(); ++i)
            {   
                // Kiểm tra có ít nhất một chữ in hoa không
                if(isupper(password[i]))
                {
                    test1 = true;
                }
                // Kiểm tra có ít nhất một chữ in thường không
                else if(islower(password[i]))
                {
                	test2 = true;
                }
                // Kiểm tra có ít nhất một số không
                else if(isdigit(password[i]))
                {
                    test3 = true;
                }
                // Kiểm tra có ít nhất một kí tự đặc biệt ! @ # $ % ^ & * ( ) - +
                else if(ispunct(password[i]))
                {
                    test4 = true;
                }
            }
            
            for(long long i = 0; i < password.size() - 1; ++i)
            {
                if(password[i] == password[i + 1])
                {
                    test5 = false;
                    break;
                }
            }
            if(test1 && test2 && test3 && test4 && test5 )
            {
                cout << "VALID" << endl;
            }
            else
            {
                cout << "INVALID" << endl;
            }
        }    
    }
    return 0;
}