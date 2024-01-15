#include <bits/stdc++.h>
using namespace std;

stack <char>Loai_Bo_Trung_Lap(string s)
{
	stack <char> st;
	if(s.size() > 0)
	{
		for(int i = 0; i < s.size(); i++)
		{
			if(!st.empty())
			{
				if(s[i] == st.top())
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
	}
	return st;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		stack <char> st = Loai_Bo_Trung_Lap(s);
		string ans = "";
		if(st.size() > 0)
		{
			while(!st.empty())
			{		     
				ans += st.top();
				st.pop();
			}
			reverse(ans.begin(),ans.end());
		}

		cout << ans << endl;
	}
}