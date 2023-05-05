#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    set<int> s;
    map<int, int> m;
    vector<int> v1(N);
    for (int i = 0; i < N; i++) {
        cin >> v1[i];
        s.insert(v1[i]);
    }
    vector<int> v(s.size());
    int idx = 0;
    for (auto element : s) {
        m.insert({element, idx});
        idx++;
    }
    for (auto element : v1) {
        cout << m[element] << " ";
    }
    return 0;
}