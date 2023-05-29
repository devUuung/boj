#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    unsigned long long N, R; cin >> N >> R;
    unsigned long long sum=0;
    unsigned long long Num = N - R;
    for (unsigned long long i = 1; i <= sqrt(Num); i++) {
        unsigned long long j = Num / i;
        if (Num % i == 0 && i > R) {
            sum += i;
        }
        if (j != i && Num % j == 0 && j > R) {
            sum += j;
        }
    }
    cout << sum;
    return 0;
}