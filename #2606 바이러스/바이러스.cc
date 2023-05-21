#include <bits/stdc++.h>
using namespace std;
int N, E;
vector<int> visited;
vector<vector<int>> graph;

int dfs(int start);

int main() {
    cin >> N;
    cin >> E;
    for (int i = 0; i < N+1; i++) {
        vector<int> temp;
        for (int j = 0; j < N+1; j++) {
            temp.push_back(0);
        }
        graph.push_back(temp);
    }
    for (int i = 0; i < E; i++) {
        int a, b; cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    for (int i = 0; i < N+1; i++) {
        visited.push_back(0);
    }

    cout << dfs(1) - 1;
    return 0;
}

int dfs(int start) {
    if (visited[start] == 1) return 0;
    visited[start] = 1;
    int sum = 1;
    for (int i = 1; i < N+1; i++) {
        if (graph[start][i] == 1) sum += dfs(i);
    }
    return sum;
}