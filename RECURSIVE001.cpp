#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int arraySum(vector<int> vct, int size) {
// Code
    if(size == 1)
    {
        return vct.at(0);
    }
    return arraySum(vct,size - 1) + vct.at(size - 1); 
}


int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin >> str;
        stringstream ss(str);
        vector<int> num;
        for(int i; ss >> i;) {
            num.push_back(i);
            if(ss.peek() == ',') {
                ss.ignore();
            }
        }
        cout << arraySum(num,num.size()) << endl;
        
    }
    
}