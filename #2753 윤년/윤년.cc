#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    if ((N % 4 == 0 && N % 100 != 0) || N % 400 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}