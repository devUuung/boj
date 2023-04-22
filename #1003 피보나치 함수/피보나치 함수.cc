#include <iostream>
#include <array>
using namespace std;

array<array<int, 3>, 51> dp;

array<int, 3> fibonacci(int n) {
    if (dp[n][0]) return dp[n];
    auto fibo1 = fibonacci(n-1);
    auto fibo2 = fibonacci(n-2);
    dp[n][0] = fibo1[0] + fibo2[0];
    dp[n][1] = fibo1[1] + fibo2[1];
    dp[n][2] = fibo1[2] + fibo2[2];
    return dp[n];
}

int main() {
    dp[0] = {1, 1, 0};
    dp[1] = {1, 0, 1};
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    while (N--) {
        int a; cin >> a;
        fibonacci(a);
        cout << dp[a][1] << " " << dp[a][2] << "\n";
    }
    return 0;
}