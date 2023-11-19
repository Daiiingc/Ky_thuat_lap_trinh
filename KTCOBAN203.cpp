// #include <iostream>
// #include <string.h>
// using namespace std;

// void Tim_Xau_Me_Ngan_Nhat(char a[], char b[], int &n)
// {
// 	char *ptr;
//     for(int i = 0; i < strlen(b); i++)
//     {
//         if(strchr(a,b[i]) != NULL )
//         {
//             ptr = strchr(a,b[i]);
// 		    if(ptr - a == strlen(a) - 1 && i == 0)
// 		    {
// 		        n += strlen(b) - 1;
// 		        break;
// 		    }
// 		    else if(a[ptr - a] < a[strchr(a,b[i]) - a])
// 			{
// 		   		n++;
// 			}
// 		}
// 		else
// 		{
// 		    n++;
// 		}
//     }
// }

// int main(void)
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		char a[501], b[501];
// 		cin >> a >> b;
// 		int n;
// 		if(strlen(a) >= strlen(b))
// 		{
// 		    n = strlen(a);
// 		    Tim_Xau_Me_Ngan_Nhat(a,b,n);
// 		}
// 		else
// 		{
// 		    n = strlen(b);
// 		    Tim_Xau_Me_Ngan_Nhat(b,a,n);
// 		}
// 		cout << n << endl;
// 	}
// }

#include <iostream>
#include <vector>
using namespace std;

int XauMeChungNganNhat(string A, string B) {
    int m = A.length();
    int n = B.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    	string A,B;
    	cin>>A>>B;
        int result = XauMeChungNganNhat(A, B);
        cout << result << endl;
    }
    return 0;
}