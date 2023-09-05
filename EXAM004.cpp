#include<bits/stdc++.h>

using namespace std;

int main(void)
{   
    freopen("password.in", "r", stdin);
    freopen("res.out", "w", stdout);
    
    string password;
    while(cin >> password)
    {
        bool test1 = false, test2 = false, test3 = false, test4 = false, test5 = true;
        
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
// #include <bits/stdc++.h>

// using namespace std;

// bool isSpecialChar(char c)
// {

//     return (ispunct(c));
// }

// int main()
// {
//     freopen("password.in", "r", stdin);
//     freopen("res.out", "w", stdout);
//     string s;

//     while (cin >> s)
//     {
//         bool up_char = false;
//         bool low_char = false;
//         bool num_char = false;
//         bool special_char = false;
//         bool near_char = true;

//         if (s.size() < 8)

//         {
//             cout << "INVALID"
//                    << "\n";
//         }
//         else
//         {
//             for (long long i = 0; i < s.size(); ++i)
//             {
//                 if (isupper(s[i]))
//                 {
//                     up_char = true;
//                 }
//                 else if (islower(s[i]))
//                 {
//                     low_char = true;
//                 }
//                 else if (isdigit(s[i]))
//                 {
//                     num_char = true;
//                 }
//                 else if (isSpecialChar(s[i]))
//                 {
//                     special_char = true;
//                 }
//             }

//             for (long long i = 0; i < s.size() - 1; ++i)
//             {
//                 if (s[i] == s[i + 1])
//                 {
//                     near_char = false;
//                     break;
//                 }
//             }

//             if (up_char && low_char && num_char && special_char && near_char)
//             {
//                 cout << "VALID"
//                        << "\n";
//             }
//             else
//             {
//                 cout << "INVALID"
//                        << "\n";
//             }
//         }
//     }

//     return 0;
// }