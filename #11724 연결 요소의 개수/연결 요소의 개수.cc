#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> graph;
vector<int> visited;
int cnt = 0;

void dfs(int start) {
    if (visited[start] == 1) return;
    cnt++;
    stack<int> visit;
    visit.push(start);
    while (!visit.empty()) {
        int node = visit.top();
        visited[node] = 1;
        visit.pop();
        for (auto iter : graph[node]) {
            if (visited[iter] == 0) visit.push(iter);
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    cin >> N >> M;

    graph.resize(N+1);
    visited.resize(N+1);
    for (int i = 1; i <= N; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        dfs(i);
    }
    cout << cnt;
    return 0;
}
