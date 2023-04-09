#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100001

using namespace std;

vector<int> graph[MAX];
int visitedNumber[MAX];
int number = 1;

void dfs(int start) {
    if (!visitedNumber[start]) {
        visitedNumber[start] = number++;
        for (int &node : graph[start]) {
            if (!visitedNumber[node]) {
                dfs(node);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int N, M, R;
    cin >> N >> M >> R;
    for (int i = 0; i < M; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        graph[tmp1].push_back(tmp2);
        graph[tmp2].push_back(tmp1);
    }

    for(int i = 1; i < N+1; i++) sort(graph[i].begin(), graph[i].end());
    dfs(R);
    for (int i = 1; i < N+1; i++) {
        cout << visitedNumber[i] << "\n";
    }
    return 0;
}