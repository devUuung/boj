#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
unordered_map<int, bool> visited1;
unordered_map<int, bool> visited2;

void dfs(int node) {
    if (visited1[node]) return;
    visited1[node] = true;
    cout << node << " ";
    for (auto iter: v[node]) {
        dfs(iter);
    }
}

void bfs(int node) {
    visited2[node] = true;
    queue<int> q;
    q.push(node);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto iter: v[x]) {
            if (!visited2[iter]) {
                q.push(iter);
                visited2[iter] = true;
            }
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N, M, V; cin >> N >> M >> V;
    v.resize(N+1);
    while (M--) {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 1; i < v.size(); i++) {
        sort(v[i].begin(), v[i].end());
    }
    while (N--) {
        visited1.insert({N, false});
        visited2.insert({N, false});
    }
    dfs(V);
    cout << "\n";
    bfs(V);
    return 0;
}