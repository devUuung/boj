#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define price first
#define weight second

bool cmp(pair<int, int> x, pair<int, int> y) {
    if (x.price > y.price) return false;
    if (x.price == y.price && x.weight > y.weight) return false;
    return true;
}

priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&cmp)> maxQ(cmp);
multiset<int> v;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N, K; cin >> N >> K;
    ll sum=0;
    // O(N)
    for (int i = 0; i < N; i++) {
        int M, V; cin >> M >> V;
        maxQ.emplace(V, M);
    }
    // O(K)
    for (int i = 0; i < K; i++) {
        int C; cin >> C;
        v.insert(C);
    }
    // second = 무게
    // first = 가격
    while (!maxQ.empty()) {
        pair<int, int> jewel = maxQ.top();
        if (v.lower_bound(jewel.weight) != v.end()) {
            sum += jewel.price;
            v.erase(v.lower_bound(jewel.weight));
        }
        maxQ.pop();
    }
    cout << sum;
    return 0;
}