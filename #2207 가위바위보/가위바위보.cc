#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[20000];
vector<int> reverse_graph[20000];
vector<bool> visited;
vector<int> s;
int scc[20000];

#define trueX(x) (x-1) << 1
#define falseX(x) (((x-1) << 1) | 1)
#define notX(x) (x ^ 1)

void DFS(int node) {
    visited[node] = true;
    for (auto i : graph[node]) {
        if (!visited[i]) DFS(i);
    }
    s.push_back(node);
}

void reverse_DFS(int node, int color) {
    visited[node] = true;
    scc[node] = color;
    for (auto i : reverse_graph[node]) {
        if (!visited[i]) reverse_DFS(i, color);
    }
}

int main() {
    int N, M; cin >> N >> M;
    visited.resize(N * 2);
    for (int i = 0, x, y; i < N; i++) {
        cin >> x >> y;
        if (x == -y) continue;
        if (x > 0) x = trueX(x);
        else x = falseX(-x);
        if (y > 0) y = trueX(y);
        else y = falseX(-y);
        graph[notX(x)].push_back(y);
        graph[notX(y)].push_back(x);
        reverse_graph[y].push_back(notX(x));
        reverse_graph[x].push_back(notX(y));
    }
    for (int i = 0; i < N*2; i++) {
        if (!visited[i]) DFS(i);
    }
    reverse(s.begin(), s.end());
    fill(visited.begin(), visited.end(), false);
    int color = 1;
    for (auto i : s) {
        if (!visited[i]) reverse_DFS(i, color);
        color++;
    }
    for (int i = 0; i < M; i++) {
        if (scc[i*2] == scc[i*2+1]) {
            cout << "OTL";
            return 0;
        }
    }
    cout << "^_^";
    return 0;
}