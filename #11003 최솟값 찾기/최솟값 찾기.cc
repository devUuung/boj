#include <iostream>
#include <deque>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N, L; cin >> N >> L;
    deque<pair<int, int>> q;
    for (int i = 1; i <= N; i++) {
        if (q.size() && q.front().second <= i - L) q.pop_front();
        int x; cin >> x;
        while (q.size() && q.back().first >= x) q.pop_back();
        q.emplace_back(x, i);
        cout << q.front().first << " ";
    }
    return 0;
}