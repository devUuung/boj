#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 1001
int N, M;

int arr[MAX];
int dp[MAX][MAX];

int f(int i, int col) {
    if (i >= N) return 0;
    if (dp[i][col] != -1) return dp[i][col];
    // col이 0인 경우 계산이 이상함.
    dp[i][col] = (M - col + 1) * (M - col + 1) + f(i + 1, arr[i]+1);
    if (col + arr[i] <= M) {
        dp[i][col] = min(dp[i][col], f(i+1, col + arr[i] + 1));
    }
    return dp[i][col];
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    fill(&dp[0][0], &dp[1000][1000], -1);
    cout << f(0, 0);
    return 0;
}