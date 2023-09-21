#include <iostream>
#include <string>
using namespace std;

/*
    long long min = pow(10,(k-1));
    long long max = pow(10,k) - 1;
    max -= 1;
*/

long long pow(int n, int k)
{
	long long value = 1;
	for(int i = 0; i < k; i++)
	{	
		value *= n;
	}
	return value;
}

bool Check_Reverse_number(long long n)
{
	string s;
	s = to_string(n);
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != s[s.size() - i - 1])
    	{
	    	return false;
    	}
	}
	return true;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int k;
        cin >> k;
        long long min = pow(10,(k-1));
        long long max = pow(10,k);
        int count;
        for(long long i = min; i <= max - 1; i++)
        {
            if(Check_Reverse_number(i) == 1)
            {
                count++;
            }
        }
		cout << count << endl;
    }
    return 0;
}

/* Trick =))
#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int k;
        cin >> k;
        long long count;
        if(k == 1 || k == 2)
        {
            count = 9;
        }
        else if(k == 3 || k == 4)
        {
            count = 90;
        }
        else if(k == 5 || k == 6)
        {
            count = 900;
        }
        else if(k == 7 || k == 8)
        {
            count = 9000;
        }
        else if(k == 9 || k == 10)
        {
            count = 90000;
        }
        else if(k == 11 || k == 12)
        {
            count = 900000;
        }
        else if(k == 13 || k == 14)
        {
            count = 9000000;
        }else if(k == 15 || k == 16)
        {
            count = 90000000;
        }else if(k == 17 || k == 18)
        {
            count = 900000000;
        }
        cout << count << endl;
    }
    return 0;
}
*/

