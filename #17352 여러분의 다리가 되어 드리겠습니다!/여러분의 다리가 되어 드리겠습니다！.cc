#include <bits/stdc++.h>

using namespace std;

vector<int> parent;

int find_root(int x) {
    if (parent[x] < 0) return x;
    return parent[x] = find_root(parent[x]);
}

void union_root(int x, int y) {
    x = find_root(x);
    y = find_root(y);
    if (x == y) return;
    if (parent[x] < parent[y]) {
        parent[x] += parent[y];
        parent[y] = x;
    } else {
        parent[y] += parent[x];
        parent[x] = y;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N; cin >> N;
    if (N == 2) {
        cout << 1 << " " << 2;
        return 0;
    }
    parent.resize(N+1, -1);
    for (int i = 0; i < N - 2; i++) {
        int a, b; cin >> a >> b;
        if (a < b) union_root(a, b);
        else union_root(b, a);
    }
    vector<int> ans;
    ans.push_back(find_root(1));
    for (int i = 2; i <= N; i++) {
        int x = find_root(i);
        if (ans[0] != x) ans.push_back(x);
    }
    cout << ans[0] << " " << ans[1];
    return 0;
}