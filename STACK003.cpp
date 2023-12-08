#include <string>
#include <stack>
#include <iostream>
using namespace std;

bool correct(string s, string t)
{
	stack<char>stack_s;
	stack<char>stack_t;
	for(char c:s)
	{
		if(c == '#' && !stack_s.empty())
		{
			stack_s.pop();
		}
		else if(c != '#')
		{
			stack_s.push(c);
		}
	}
	
	for(char c:t)
	{
		if(c == '#' && !stack_t.empty())
		{
			stack_t.pop();
		}
		else if(c != '#')
		{
			stack_t.push(c);
		}
	}
	return stack_s == stack_t;
}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s, t;
        cin >> s;
        cin >> s >> t;
        bool result = correct(s,t);
        cout << result << endl;
    }
    return 0;
}