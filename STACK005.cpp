#include <iostream>
#include <string>
#include <stack>
using namespace std;

int length_after_remove(string s)
{
	stack<char> stack_s;
	stack_s.push('#');
	for(int i = 0; i < s.length(); i++)
	{
		stack_s.push(s[i]);
		if(stack_s.top() == 'B')
		{
			stack_s.pop();
			if(stack_s.top() == 'A')
			{
				stack_s.pop();	
			}
			else
			{
				stack_s.push('B');
			}
		}
		else if(stack_s.top() == 'D')
		{
			stack_s.pop();
			if(stack_s.top() == 'C')
			{
				stack_s.pop();	
			}
			else
			{
				stack_s.push('D');
			}
		}
	}
	return stack_s.size() - 1;
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << length_after_remove(s) << endl;
	}
	return 0;
}