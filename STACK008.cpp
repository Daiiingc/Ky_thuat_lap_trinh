#include <bits/stdc++.h>
using namespace std;

int So_Lan_Can_Them_De_Chuoi_Hop_Le(string s)
{
	stack <char> st;
	for(int i = 0; i < s.size(); i++)
	{
		if(!st.empty())
		{
			if(s[i] == ')')
			{
				if(st.top() == '(')
				{
					st.pop();
				}
				else
				{
					st.push(s[i]);
				}
			}
			else
			{
				st.push(s[i]);
			}
		}
		else
		{
			st.push(s[i]);
		}
	}
	return st.size();
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << So_Lan_Can_Them_De_Chuoi_Hop_Le(s) << endl;
	}
}