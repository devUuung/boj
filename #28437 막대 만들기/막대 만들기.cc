#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

vector<ll> findDivisors(int n) {
    vector<ll> divisors;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            // i가 n의 제곱근이 아니면 n/i도 약수이므로 추가합니다.
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll dp[100001] = { 0, };
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        int temp; cin >> temp;
        dp[temp] = 1;
    }

    int M; cin >> M;
    vector<ll> object(M);
    for (int i = 0; i < M; i++) {
        int temp; cin >> temp;
        object[i] = temp;
    }

    vector<int> real_object(M);
    copy(object.begin(), object.end(), real_object.begin());

    sort(real_object.begin(), real_object.end());
    for (int i = 1; i < real_object[M - 1] + 1; i++) {
        vector<ll> divisors = findDivisors(i);
        ll result = 0;
        for (auto j : divisors) result += dp[j];
        dp[i] = result;
    }

    for (auto i : object) {
        cout << dp[i] << " ";
    }
}