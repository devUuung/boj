#include <iostream>
#include <array>

using namespace std;

array<int, 11> dp;

int factorial(int n) {
    if (dp[n]) return dp[n];
    if (n == 1) return 1;
    dp[n] = factorial(n-1) * n;
    return dp[n];
}

int main() {
    dp[0] = 1; dp[1] = 1;
    int N, K; cin >> N >> K;
    cout << factorial(N) / factorial(K) / factorial(N-K);
    return 0;
}