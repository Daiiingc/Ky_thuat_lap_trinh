#include <iostream>
using namespace std;

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

int main(void)
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        cin >> N;
        int thu = 0;
        int i = 1;
        int old_value = fibonacci(0);
        while (i++)
        {
            int new_value = fibonacci(i);
            int count = new_value - old_value - 1;
            int flag = 0;
            if(count >= 1)
            {
                if(thu + count >= N)
                {
                    for(int j = 0; j < count; j++)
                    {
                        thu++;
                        old_value++;
                        if(thu == N)
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                else
                {
                    thu += count;
                }
            }
            if(flag == 1)
            {
                break;
            }
            old_value = new_value;
        }
        cout << old_value << endl;
    }
    return 0;
}