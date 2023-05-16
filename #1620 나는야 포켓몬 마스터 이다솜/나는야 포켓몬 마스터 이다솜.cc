#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int N, M; cin >> N >> M;
    map<int, string> m1;
    map<string, int> m2;
    for (int i = 1; i <= N; i++) {
        string temp; cin >> temp;
        m1.insert({i, temp});
        m2.insert({temp, i});
    }

    while (M--) {
        string temp; cin >> temp;
        if (isdigit(temp[0])) {
            int num = atoi(temp.c_str());
            cout << m1[num] << "\n";
        } else {
            cout << m2[temp] << "\n";
        }
    }
    return 0;
}