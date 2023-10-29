#include <iostream>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        int x,y,m;
        int count, con_lai = 0;
        cin >> x >> y >> m;
        int so_hop = m/x;
        count = so_hop;
        while(so_hop >= y)
        {
            count += so_hop / y;
            so_hop = so_hop / y + so_hop % y;
        }
        cout << count << endl;
    }
    return 0;
}