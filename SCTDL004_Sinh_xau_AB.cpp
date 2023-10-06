#include <iostream>
#include <string>

void sinh_AB(int n, std::string prefix = "") {
    if (n == 0) {
        std::cout << prefix << " ";
    }
    else {
        sinh_AB(n - 1, prefix + "A");
        sinh_AB(n - 1, prefix + "B");
    }
}

int main() {
    int n, t;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        sinh_AB(n);
        std::cout << std::endl;
    }
}