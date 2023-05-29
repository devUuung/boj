#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N, M; cin >> N >> M;
    vector<int> s;
    vector<int> temp;
    for (int i = 1; i <= N; i++) s.push_back(i);
    for (int i = 0; i < M; i++) temp.push_back(1);
    for (int i = 0; i < N - M; i++) temp.push_back(0);

    do {
        for (int i = 0; i < s.size(); i++) {
            if (temp[i] == 1) cout << s[i] << " ";
        }
        cout << "\n";
    } while (prev_permutation(temp.begin(), temp.end()));

    return 0;
}