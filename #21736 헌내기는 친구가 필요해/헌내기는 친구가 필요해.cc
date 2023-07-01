#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<vector<char>> vv;
vector<vector<bool>> vvisited;
int result=0;
int doyeon_x, doyeon_y;

void dfs(int x, int y) {
    if (vvisited[y][x]) return;
    if (vv[y][x] == 'P') result++;
    if (vv[y][x] == 'X') return;
    vvisited[y][x] = true;
    if (x > 0) dfs(x-1, y);
    if (y > 0) dfs(x, y-1);
    if (x < M-1) dfs(x+1, y);
    if (y < N-1) dfs(x, y+1);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        vector<char> v;
        for (int j = 0; j < M; j++) {
            char temp; cin >> temp;
            if (temp == 'I') {
                doyeon_x = j;
                doyeon_y = i;
            }
            v.push_back(temp);
        }
        vv.push_back(v);
        vvisited.emplace_back(M, false);
    }
    dfs(doyeon_x, doyeon_y);
    if (result) cout << result;
    else cout << "TT";
    return 0;
}