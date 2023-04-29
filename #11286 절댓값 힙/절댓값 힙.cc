#include <bits/stdc++.h>
using namespace std;

struct comp {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) return a > b;
        return abs(a) > abs(b);
    }
};

int main() {
    int N; cin >> N;
    priority_queue<int, vector<int>, comp> q;
    while (N--) {
        int temp; cin >> temp;
        if (!temp) {
            if (q.empty()) cout << "0\n";
            else {
                cout << q.top() << "\n";
                q.pop();
            }
        } else {
            q.push(temp);
        }
    }
    return 0;
}