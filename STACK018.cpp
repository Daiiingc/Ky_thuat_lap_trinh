#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void finalPrices(vector<int>& prices) {
        vector<int>stack;
        int s=prices.size();
        for(int i=0;i<s;i++){
            if(stack.empty() || prices[stack.back()]<prices[i])
                stack.push_back(i);
            else{
                while(!stack.empty() && prices[stack.back()]>=prices[i]){
                    prices[stack.back()]-=prices[i];
                    stack.pop_back();
                }
                stack.push_back(i);
            }
        }
    }

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string input;
        cin >> input;
        stringstream ss(input);
        vector<int> prices;
        for(int i; ss >> i;) {
            prices.push_back(i);
            if(ss.peek() == ',') {
                ss.ignore();
            }
        }
        
        finalPrices(prices);
        for(int i = 0; i < prices.size()-1; i++)
        {
            cout << prices.at(i) << ",";
        }
        cout << prices.back() << endl;
    }
    return 0;
}