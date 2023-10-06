#include <iostream>
#include <vector>
using namespace std;

vector<string> sinh_gray(int n) {
    if (n == 0) {
        vector<string> gray_code;
        gray_code.push_back("");
        return gray_code;
    }

    vector<string> gray_code_n_minus_1 = sinh_gray(n - 1);
    vector<string> gray_code;

    for (int i = 0; i < gray_code_n_minus_1.size(); i++) {
        gray_code.push_back("0" + gray_code_n_minus_1[i]);
    }

    for (int i = gray_code_n_minus_1.size() - 1; i >= 0; i--) {
        gray_code.push_back("1" + gray_code_n_minus_1[i]);
    }

    return gray_code;
}

int main() {
    int n, t;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<string> gray_code = sinh_gray(n);
        for (int i = 0; i < gray_code.size(); i++) {
            cout << gray_code[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}