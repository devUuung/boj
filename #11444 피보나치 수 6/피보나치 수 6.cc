#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<unsigned long long>> matrix;
matrix operator * (matrix &a, matrix &b) {
    int n = a.size();
    matrix c(n, vector<unsigned long long>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            c[i][j] %= 1000000007;
        }
    }
    return c;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    unsigned long long N; cin >> N;
    if (N <= 1) {
        cout << N;
        return 0;
    }
    matrix result = {{1, 0}, {0, 1}};
    matrix a = {{1, 1}, {1, 0}};
    while (N > 0) {
        if (N&1) {
            result = result * a;
        }
        a = a * a;
        N /= 2;
    }
    cout << result[0][1];
    return 0;
}