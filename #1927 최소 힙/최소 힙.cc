#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    priority_queue<int, vector<int>, greater<int>> pQ;
    while (N--) {
        int a; cin >> a;
        if (!a) {
            if (pQ.empty()) cout << "0\n";
            else {
                cout << pQ.top() << "\n";
                pQ.pop();
            }
        } else {
            pQ.push(a);
        }
    }
    return 0;
}