#include <iostream>
#include <stack>
using namespace std;

bool Kiem_Tra_Dau_Ngoac_Dung(string s)
{
   stack <char> stk;
   for(int i = 0; i < s.size(); i++)
   {
        if(s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            stk.push(s[i]);
        }
        else if(s[i] == '}')
        {
            if(stk.size() == 0)
            {
                return false;
            }
            else if(stk.top() == '{')
            {
                stk.pop();
            }
        } 
        else if(s[i] == ']')
        {
            if(stk.size() == 0)
            {
                return false;
            }
            else if(stk.top() == '[')
            {
                stk.pop();
            }
        }
        else if(s[i] == ')')
        {
            if(stk.size() == 0)
            {
                return false;
            }
            else if(stk.top() == '(')
            {
                stk.pop();
            }
        }         
    }
    if(stk.size() > 0)
    {
        return false;
    }
    return true; 
}

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        if(Kiem_Tra_Dau_Ngoac_Dung(S) == 1)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}