#include <bits/stdc++.h>
using namespace std;
int N;
vector<vector<int>> vv;

int dfs(int x, int y) {
    if (vv[y][x] == 0) return 0;
    vv[y][x] = 0;
    int result = 0;
    if (x > 0) result += dfs(x-1, y);
    if (x < N-1) result += dfs(x+1, y);
    if (y > 0) result += dfs(x, y-1);
    if (y < N-1) result += dfs(x, y+1);
    return result+1;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin >> N;
    for (int i = 0; i < N; i++) {
        vector<int> v;
        for (int j = 0; j < N; j++) {
            char temp; cin >> temp;
            v.push_back(temp - '0');
        }
        vv.push_back(v);
    }
    vector<int> result;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int temp = dfs(j, i);
            if (temp != 0) result.push_back(temp);
        }
    }
    cout << result.size() << "\n";
    sort(result.begin(), result.end());
    for (auto i : result) {
        cout << i << "\n";
    }
    return 0;
}