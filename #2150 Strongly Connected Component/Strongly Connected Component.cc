#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<vector<int>> reverse_graph;
vector<bool> reverse_visited;
stack<int> s;

void DFS(int node) {
    if (visited[node]) return;
    visited[node] = true;
    for (auto i : graph[node]) {
        DFS(i);
    }
    s.push(node);
}

void reverse_DFS(int node, vector<int>& temp) {
    if (reverse_visited[node]) return;
    reverse_visited[node] = true;
    temp.push_back(node);
    for (auto i : reverse_graph[node]) {
        reverse_DFS(i, temp);
    }
}

int main() {
    int V, E; scanf("%d %d", &V, &E);
    graph.resize(V+1);
    visited.resize(V+1, false);
    reverse_graph.resize(V+1);
    reverse_visited.resize(V+1, false);
    for (int i = 0; i < E; i++) {
        int A, B; scanf("%d %d", &A, &B);
        graph[A].push_back(B);
        reverse_graph[B].push_back(A);
    }
    for (auto i : graph) {
        sort(i.begin(), i.end());
    }
    for (auto i : reverse_graph) {
        sort(i.begin(), i.end());
    }
    for (int i = 1; i < visited.size(); i++) {
        if (!visited[i]) DFS(i);
    }
    vector<vector<int>> scc;
    for (int i = 0; s.size(); i++) {
        vector<int> temp;
        int value = s.top();
        s.pop();
        reverse_DFS(value, temp);
        sort(temp.begin(), temp.end());
        if (temp.size()) {
            temp.push_back(-1);
            scc.push_back(temp);
        }
    }
    sort(scc.begin(), scc.end());
    printf("%d\n", scc.size());
    for (auto i : scc) {
        for (auto j : i) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}