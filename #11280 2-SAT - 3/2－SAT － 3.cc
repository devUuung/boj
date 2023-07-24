#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>
using namespace std;

vector<int> graph[20202];
vector<int> reverse_graph[20202];
int scc[20202];
int visited[20202];
stack<int> s;

int notX(int x) {
    return x ^ 1;
}

int trueX(int x) {
    return x * 2;
}

int falseX(int x) {
    return x * 2 + 1;
}

void DFS(int node) {
    if (visited[node]) return;
    visited[node] = 1;
    for (auto i : graph[node]) DFS(i);
    s.push(node);
}

void reverse_DFS(int node, int color) {
    if (visited[node]) return;
    visited[node] = 1;
    scc[node] = color;
    for (auto i : reverse_graph[node]) reverse_DFS(i, color);
}

int main() {
    int N, M; scanf("%d %d", &N, &M);
    for (int iter = 0; iter < M; iter++) {
        int i, j; scanf("%d %d", &i, &j);
        if (i > 0) i = trueX(i);
        else i = falseX(-i);
        if (j > 0) j = trueX(j);
        else j = falseX(-j);
        graph[notX(i)].push_back(j);
        graph[notX(j)].push_back(i);
        reverse_graph[j].push_back(notX(i));
        reverse_graph[i].push_back(notX(j));
    }
    memset(visited, 0, sizeof(visited));
    for (int i = 2; i <= N*2+1; i++) {
        if (!visited[i]) DFS(i);
    }
    memset(visited, 0, sizeof(visited));
    int color = 1;
    while (s.size()) {
        int i = s.top();
        s.pop();
        if (!visited[i]) {
            reverse_DFS(i, color);
            color++;
        }
    }
    for (int i = 1; i < (N+1); i++) {
        if (scc[i*2] == scc[i*2+1]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}