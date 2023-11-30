#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n, 1), suffix(n, 1), result(n);

    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
        suffix[n - i - 1] = suffix[n - i] * nums[n - i];
    }

    for (int i = 0; i < n; ++i) {
        result[i] = prefix[i] * suffix[i];
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string line;
        cin >> line;
        stringstream ss(line);
        vector<int> nums;
        string token;

        while (getline(ss, token, ',')) {
            nums.push_back(stoi(token));
        }

        vector<int> result = solve(nums);

        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i != result.size() - 1) {
                cout << ",";
            }
        }
        cout << endl;
    }

    return 0;
}