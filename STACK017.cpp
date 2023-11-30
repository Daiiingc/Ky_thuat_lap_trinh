#include <iostream>
using namespace std;

string decodeAtIndex(string input, int k) 
{
    long long totalLength = 0;
    // Compute total length
    for (auto character : input) 
    {
        if (isdigit(character)) 
        {
            totalLength *= character - '0';
        }
        else 
        {
            totalLength++;
        }
    }
    // moving backward until having the letter at position k
    for (int i = input.size() - 1; i >= 0; i--) 
    {
        if (isdigit(input[i])) 
        {
            totalLength /= (input[i] - '0');
            k = k % totalLength;
        } 
        else 
        {
            if (k == 0 || totalLength == k)
            {
                return string(1, input[i]);
            }
            totalLength--;
        }
    }
    return "";
}

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        int k;
        cin >> s >> k;
        cout << decodeAtIndex(s,k) << endl;
    }
    return 0;
}