#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int T; cin >> T;
    while (T--) {
        int k; cin >> k;
        multiset<int> s;
        while (k--) {
            char msg; int val;
            cin >> msg >> val;
            if (msg == 'I') {
                s.insert(val);
            } else {
                if (s.empty()) continue;
                if (val == 1) {
                    s.erase(--s.end());
                } else {
                    s.erase(s.begin());
                }
            }
        }
        if (s.empty()) cout << "EMPTY\n";
        else cout << *--s.end() << " " << *s.begin() << "\n";
    }
    return 0;
}