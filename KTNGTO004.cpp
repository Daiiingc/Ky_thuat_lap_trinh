#include <iostream>
using namespace std;


void Sang_So_Nguyen_To(bool arr[], int length)
{
// Thuật toán sàng nguyên tố
// Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for(int i = 2; i <= length; i++)
    {
        if (arr[i] == true)
        {
            for(int j = 2 * i; j <= length; j += i)
            {
                arr[j] = false;
            }
        }
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		bool check[n + 1] = {false};

		
        for(int i = 2; i <= n; i += 1)
        {
            check[i] = true;
        }
        Sang_So_Nguyen_To(check,n);
        
		if(check[n] == true)
		{
			cout << n;
		}
		else
		{	
			long long max;
			for(long long i = 2; i*i <= n; i++)
			{
				if(check[i] == true)
				{
					while(n%i == 0)
					{
						n /= i;
					}
					max = i;
					cout << max << " ";
				}
			}
			cout << max;
		}
		cout << endl;
	}
	return 0;
}