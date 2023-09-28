#include <iostream>
using namespace std;

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

// kiểm tra dãy số từ n đến 10^15 để tìm số đối xứng
long long So_Doi_Xung_Lon_Hon_n(long long number)
{
    while(number)
    {
        if(Check_Reverse_number(number) == true)
        {
            break;
        }
        number++;
    }
    return number;
}


// kiểm tra dãy số từ n đến 0 để tìm số đối xứng
long long So_Doi_Xung_Nho_Hon_n(long long number)
{
    while(number)
    {
        if(Check_Reverse_number(number) == true)
        {
            break;
        }
        number--;
    }
    return number;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        long long n;
        cin >> n;
        long long value1 = So_Doi_Xung_Lon_Hon_n(n);
        long long value2 = So_Doi_Xung_Nho_Hon_n(n);
        if(value1 - n > n - value2)
        {
            cout << value2 << endl;
        }
        else if(value1 - n < n - value2)
        {
            cout << value1 << endl;
        }
        else
        {
            if(value1 != value2)
            {
                cout << value2 << ' ' << value1 << endl;
            }
            else
            {
                cout << value1 << endl;
            }
        }
    }
    return 0;
}
