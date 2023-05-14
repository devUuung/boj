#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B; cin >> A >> B;
    vector<int> dp;
    for (int i = 1; i < B+1; i++) {
        for (int j = 1; j < i+1; j++) dp.push_back(i);
    }
    int sum = 0;
    for (int i = A-1; i < B; i++) {
        sum += dp[i];
    }
    cout << sum;
    return 0;
}