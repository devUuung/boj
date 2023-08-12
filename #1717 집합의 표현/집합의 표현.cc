#include <bits/stdc++.h>

using namespace std;

vector<int> parent;

int find_root(int x) {
    if (parent[x] < 0) return x;
    return parent[x] = find_root(parent[x]);
}

void union_root(int a, int b) {
    a = find_root(a);
    b = find_root(b);

    if (a == b) return;

    if (parent[a] < parent[b]) {
        parent[a] += parent[b];
        parent[b] = a;
    } else {
        parent[a] += parent[b];
        parent[b] = a;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int n, m; cin >> n >> m;
    for (int i = 0; i < n+1; i++) {
        parent.push_back(-1);
    }
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        if (a == 0) {
            union_root(b, c);
        } else {
            b = find_root(b);
            c = find_root(c);
            if (b == c) cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}