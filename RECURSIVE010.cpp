#include <iostream>
using namespace std;

int countDigitOne(int n) {
    int count = 0;
    for(int i = 1; i<=n; i*=10){ // làm như này để nó quét hàng chục trăm nghìn đơn vị
        int chia = i*10;
        count+=(n/chia)*i+(min(max(n%chia-i+1,0),i));
    }
    return count;

}

int main(void)
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        cout << countDigitOne(n) << endl;
    }  
}