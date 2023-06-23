#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int cnt; cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        int a, b; cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }
    return 0;
}