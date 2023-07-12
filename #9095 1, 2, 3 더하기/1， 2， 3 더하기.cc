#include <iostream>
using namespace std;

int dp[11][4];

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[2][3] = 0;
    dp[3][1] = 2;
    dp[3][2] = 1;
    dp[3][3] = 1;
    for (int i = 4; i < 11; i++) {
        dp[i][1] = dp[i-1][1] + dp[i-1][2] + dp[i-1][3];
        dp[i][2] = dp[i-2][1] + dp[i-2][2] + dp[i-2][3];
        dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
    }

    int N; cin >> N;
    while (N--) {
        int temp; cin >> temp;
        cout << dp[temp][1] + dp[temp][2] + dp[temp][3] << "\n";
    }
    return 0;
}