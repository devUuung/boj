#include <bits/stdc++.h>
using namespace std;

int T, M, N, K;
int arr[50][50];
void dfs(int x, int y);

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> T;
    while (T--) {
        // 배열 초기화
        for (int i = 0; i < 50; i++) {
            for (auto & j : arr) {
                j[i] = 0;
            }
        }
        cin >> M >> N >> K;
        // 배추 심기
        for (int i = 0; i < K; i++) {
            int a, b; cin >> a >> b;
            arr[a][b] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[j][i] == 1) {
                    cnt++;
                    dfs(j, i);
                }
            }
        }
        cout << cnt << "\n";
    }
}

void dfs(int x, int y) {
    arr[x][y] = 0;
    if (arr[x+1][y] == 1) dfs(x+1, y);
    if (arr[x-1][y] == 1 && x != 0) dfs(x-1, y);
    if (arr[x][y+1] == 1) dfs(x, y+1);
    if (arr[x][y-1] == 1 && y != 0) dfs(x, y-1);
}