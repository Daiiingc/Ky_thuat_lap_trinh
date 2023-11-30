#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> operations;
    int currNum = 1;
    int index = 0;

    while (currNum <= n && index < target.size()) {
        int num = target[index];
        if (num == currNum) {
            operations.push_back("Push");
            currNum++;
            index++;
        } else {
            operations.push_back("Push");
            operations.push_back("Pop");
            currNum++;
        }
    }

    return operations;
}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        int n;
        cin >> s >> n;

        stringstream ss(s);
        vector<int> target;
        for(int i; ss >> i; )
        {
            target.push_back(i);
            if(ss.peek() == ',')
            {
                ss.ignore();
            }
        }
    
        vector<string>arr = buildArray(target,n);

        for(int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
            if(i != arr.size() - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
    return 0;
}