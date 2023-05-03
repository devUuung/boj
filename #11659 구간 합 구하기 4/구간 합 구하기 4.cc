#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N, M; cin >> N >> M;
    vector<int> v(N+1);
    vector<int> sum(N+1);
    v[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> v[i];
    }
    partial_sum(v.begin(), v.end(), sum.begin());
    while (M--) {
        int a, b; cin >> a >> b;
        cout << sum[b] - sum[a-1] << "\n";
    }
    return 0;
}