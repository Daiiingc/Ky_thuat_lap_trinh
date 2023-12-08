#include<cstdio>

int pow10[201];

void testcase() 
{
    int x; scanf("%d", &x); x *= 9;

    pow10[0] = 1;

    for(int i = 1; i <= 200; ++i)
    {
        pow10[i] = pow10[i-1] * 10 % x;
    }
    
    for(int nd = 1; nd <= 200; ++nd)
    {
        for(int n8 = 0; n8 <= nd; ++n8)
        {
            if((8*pow10[nd] - 2*pow10[nd-n8] - 6) % x == 0) 
            {
                for(int i = 0; i < n8; ++i) printf("8");
                for(int i = 0; i < nd - n8; ++i) printf("6");
                printf("\n");
                return;
            }
        }    
    }
        
    printf("-1\n");
}

int main() 
{
    int tc; scanf("%d", &tc);
    while(tc--) testcase();
    return 0;
}