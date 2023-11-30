#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

vector<int> getDailyTemperatures(vector<int> temperatures) {
    vector<int> result(temperatures.size(), 0);
    stack<int> stack;
    for (int i = 0; i < temperatures.size(); ++i) {
        while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
            int index = stack.top();
            stack.pop();
            result[index] = i - index;
        }
        stack.push(i);
    }
    return result;
}

vector<int> strToVector(string input) {
    vector<int> result;
    stringstream ss(input);
    string token;
    while (getline(ss, token, ',')) {
        result.push_back(stoi(token));
    }
    return result;
}

string vectorToString(vector<int> input) {
    string result;
    for (int i = 0; i < input.size(); ++i) {
        result += to_string(input[i]);
        if (i < input.size() - 1) {
            result += ",";
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character
    while (t--) {
        string input;
        getline(cin, input);
        vector<int> temperatures = strToVector(input);
        vector<int> result = getDailyTemperatures(temperatures);
        string output = vectorToString(result);
        cout << output << endl;
    }
    return 0;
}