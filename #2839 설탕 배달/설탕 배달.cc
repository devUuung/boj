#include <iostream>
#include <array>

using namespace std;

array<int, 5001> dp;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < 5001; i++) {
        dp[i] = -1;
    }
    dp[3] = 1; dp[5] = 1;
    for (int i = 3; i <= N; i++) {
        if (dp[i] != -1) {
            int temp = dp[i] + 1;
            if (dp[i+3] == -1 || dp[i+3] > temp) dp[i+3] = temp;
            if (dp[i+5] == -1 || dp[i+5] > temp) dp[i+5] = temp;
        }
    }
    cout << dp[N];
    return 0;
}