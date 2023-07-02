#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> result;

void dfs(int node) {
    if (visited[node]) return;
    visited[node] = true;
    for (auto i : graph[node]) {
        if (!visited[i]) {
            result[i] = node;
            dfs(i);
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    graph.resize(N+1);
    visited.resize(N+1, false);
    result.resize(N+1);
    for (int i = 0; i < N-1; i++) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    for (int i=2; i < N+1; i++) {
        cout << result[i] << "\n";
    }
    return 0;
}