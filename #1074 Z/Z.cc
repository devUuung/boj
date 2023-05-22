#include <bits/stdc++.h>
using namespace std;
int N, r, c;
int cnt = 0;

void f(pair<int, int> start, pair<int, int> end) {
    if (start.first == end.first && start.second == end.second) {
        if (start.first == c && start.second == r) {
            cout << cnt;
            exit(0);
        } else {
            cnt++;
        }
        return;
    }
    if (!(start.first <= c && end.first >= c && start.second <= r && end.second >= r)) {
        cnt += (end.first - start.first + 1) * (end.second - start.second + 1);
        return;
    }
    pair<int, int> mean = {(start.first + end.first) / 2, (start.second + end.second) / 2};
    int temp = cnt;
    f(start, mean);
    f({mean.first+1, start.second}, {end.first, mean.second});
    f({start.first, mean.second+1}, {mean.first, end.second});
    f({mean.first+1, mean.second+1}, end);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin >> N >> r >> c;
    f({0, 0}, {pow(2, N)-1, pow(2, N)-1});
    return 0;
}