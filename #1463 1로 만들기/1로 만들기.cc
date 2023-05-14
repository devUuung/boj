#include <bits/stdc++.h>
using namespace std;
int dp[10 * 10 * 10 * 10 * 10 * 10] = {0,};

int dfs(int i) {
    if (dp[i] != 0) return dp[i];
    if (i == 1) return 0;
    vector<int> arr;
    if (i % 3 == 0) arr.push_back(dfs(i / 3));
    if (i % 2 == 0) arr.push_back(dfs(i / 2));
    arr.push_back(dfs(i - 1));
    int min = pow(10, 10);
    for (auto i : arr) {
        if (min > i) {
            min = i;
        }
    }
    dp[i] = min+1;
    return dp[i];
}

int main() {
    dp[2] = 1;
    dp[3] = 1;
    int a; cin >> a;
    int cnt = dfs(a);
    cout << cnt;
    return 0;
}