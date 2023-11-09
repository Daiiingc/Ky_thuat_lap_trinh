#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b) 
{
    // cout << a << ' ' << b << endl;
    int x = a.length();
    if (x < b.length()) x = b.length();
    a += string(x-a.length(), '0');
    b += string(x-b.length(), '0');
    
    return (a > b);
}


int main(void)
{
    // vector <int> max_num;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <string> day_so;
        for(int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            day_so.push_back(to_string(a));
            
        }
        
        sort(day_so.begin(),day_so.end(),comp);
        for(int i = 0; i < n; i++)
        {
            cout << day_so[i]; 
        }
        day_so.clear();
        cout << endl;
       
    }  
}