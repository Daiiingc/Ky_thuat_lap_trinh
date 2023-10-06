#include <iostream>
#include <string>

std::string multiply(const std::string& num1, const std::string& num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    std::string result(n1 + n2, '0');

    for (int i = n1 - 1; i >= 0; i--) {
        int carry = 0;
        int digit1 = num1[i] - '0';

        for (int j = n2 - 1; j >= 0; j--) {
            int digit2 = num2[j] - '0';

            int product = digit1 * digit2 + carry + (result[i + j + 1] - '0');
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }

        result[i] = carry + '0';
    }

    size_t start_pos = result.find_first_not_of('0');
    if (start_pos != std::string::npos) {
        result = result.substr(start_pos);
    }
    else {
        result = "0";
    }
    return result;
}

std::string power(const std::string& base, int exponent) {
    std::string result = "1";
    for (int i = 0; i < exponent; i++) {
        result = multiply(result, base);
    }
    return result;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string a;
        std::cin >> a;
        int n;
        std::cin >> n;
        std::string result = power(a, n);
        std::cout << result << std::endl;
    }
    return 0;
}