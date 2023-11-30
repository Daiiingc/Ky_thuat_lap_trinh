#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
#include <sstream>
#include <algorithm>
using namespace std;

queue<int> findUnion(queue<int> q1, queue<int> q2) {
    unordered_map<int, int> m;
    while (!q1.empty()) {
        m[q1.front()]++;
        q1.pop();
    }
    while (!q2.empty()) {
        m[q2.front()]++;
        q2.pop();
    }
    queue<int> q;
    for (auto i : m) {
        q.push(i.first);
    }
    return q;
}

int main(void){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        string s1;
        string s2;
        cin >> s1 >> s2;

        queue<int> q1;
        queue<int> q2;
        stringstream ss1(s1);
        stringstream ss2(s2);
        
        for(int i; ss1 >> i;) {
            q1.push(i);
            if(ss1.peek() == ',') {
                ss1.ignore();
            }
        }
        
        for(int i; ss2 >> i;) {
            q2.push(i);
            if(ss2.peek() == ',') {
                ss2.ignore();
            }
        }
		queue<int> q = findUnion(q1,q2);
        vector<int> result;
        while (!q.empty())
        {
            result.push_back(q.front());
            q.pop();
        }
        reverse(result.begin(),result.end());
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) cout << ",";
        }
        cout << endl;
    }    
    return 0;
}