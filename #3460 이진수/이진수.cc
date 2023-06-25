#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int cnt = 0;
        for (int i = n; i > 0; i/=2) {
            if (i%2) cout << cnt << " ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}