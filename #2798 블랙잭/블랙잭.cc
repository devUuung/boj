#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> v(N);
    int result=0;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // 보조순열
    vector<int> perm(N);
    for (int i = 0; i < 3; i++) {
        perm[i] = 1;
    }
    sort(perm.begin(), perm.end());

    do {
        vector<int> cards;
        for (int i = 0; i < N; i++) {
            if (perm[i]) cards.push_back(v[i]);
        }
        int sum = cards[0] + cards[1] + cards[2];
        if (result < sum && sum <= M) result = sum;
    } while (next_permutation(perm.begin(), perm.end()));

    cout << result;

    return 0;
}