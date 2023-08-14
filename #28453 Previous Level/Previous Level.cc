#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int temp; cin >> temp;
        if (temp < 250) cout << 4 << " ";
        else if (temp < 275) cout << 3 << " ";
        else if (temp < 300) cout << 2 << " ";
        else cout << 1 << " ";
    }
    return 0;
}