#include <iostream>
#include <vector>
using namespace std;

vector<string> units = {"", "Thousand", "Million", "Billion"};
vector<string> below_20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                           "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string helper(int n) {
    if (n == 0) {
        return "";
    } else if (n < 20) {
        return below_20[n] + " ";
    } else if (n < 100) {
        return tens[n / 10] + " " + helper(n % 10);
    } else {
        return below_20[n / 100] + " Hundred " + helper(n % 100);
    }
}

string numberToWords(int n) {
    if (n == 0) {
        return "Zero";
    } else {
        string result = "";
        for (int i = 0; n > 0; ++i) {
            if (n % 1000 != 0) {
                result = helper(n % 1000) + units[i] + " " + result;
            }
            n /= 1000;
        }
        while (result.back() == ' ') {
            result.pop_back();
        }
        return result;
    }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << numberToWords(n) << endl;
    }
    return 0;
}
