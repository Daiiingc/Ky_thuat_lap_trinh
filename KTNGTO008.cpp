#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void findPrimeSets(int P, int S, int N, vector<int>& currentSet, std::vector<vector<int>>& primeSets) {
    if (currentSet.size() == N && S == 0) {
        primeSets.push_back(currentSet);
        return;
    }
    if (currentSet.size() >= N || S <= 0)
        return;

    for (int num = P + 1; num <= S; ++num) {
        if (isPrime(num)) {
            if (num > S)
                break;
            currentSet.push_back(num);
            findPrimeSets(num, S - num, N, currentSet, primeSets);
            currentSet.pop_back();
        }
    }
}

int main() {
    int P, S, N;
    cin>>P>>N>>S;

    vector<int> currentSet;
    vector<vector<int> > primeSets;

    findPrimeSets(P, S, N, currentSet, primeSets);

    if (primeSets.empty()) {
        cout << -1 ;
    } 
	else {
        for (const auto& set : primeSets) {
            for (int num : set) {
                std::cout << num << " ";
            }
           cout <<"\n";
        }
    }

    return 0;
}