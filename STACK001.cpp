#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool Co_Phai_Ngoac_Hop_Le(string s) {
    if (s.length() % 2 != 0)
    {
        return false;
    }

    stack<char>stack;
     
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') 
        {
            stack.push(')');
        }
        else if (s[i] == '[') 
        {
            stack.push(']');
        }
        else if (s[i] == '{') 
        {
            stack.push('}');
        }
        else if (stack.empty() || (stack.top() != s[i]))
        {
            return false;
        }
        else
        {
            stack.pop();
        }
    }
    return stack.empty();
 }

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Co_Phai_Ngoac_Hop_Le(s) << endl;
    }
    return 0;
}