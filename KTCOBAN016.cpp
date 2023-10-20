#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k, n;
     
    cin>>k;
    for (int j=0; j<k; j++)
    {
        cin>>n;
        string s = "", s1 = "123456790", s2 = "098765432";
        int n1 = (n-1)/9, n2 = n - 9*n1;
         
        // doan giua
        for (int i=1; i<=n2; i++)
        {
            s.insert(i-1, 1, (char)(i + '0'));
            if(i != n2)
            {
                s.insert(s.length(), 1, (char)(n2 - i + '0'));
            }
        }

        // neu n tu 10 tro len
        if (n>9)
        {
            // doan dau va doan cuoi
            for (int i=0; i<n1; i++)
            {
                cout << s1;
                s.insert(s.length()-1, s2);
            }  
        }
        cout<<s<<endl;
    }
    return 0;
}