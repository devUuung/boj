#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<int> inDegree;
queue<int> q;

int main() {
    int N, M; cin >> N >> M;
    inDegree.resize(N+1);
    graph.resize(N+1);
    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        graph[A].push_back(B);
        inDegree[B]++;
    }

    for (int i = 1; i <= N; i++) {
        if (inDegree[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        cout << cur << " ";
        for (int next : graph[cur]) {
            inDegree[next]--;
            if (inDegree[next] == 0) q.push(next);
        }
    }

    return 0;
}