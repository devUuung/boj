#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define max_value first
#define min_value second

vector<ll> arr;
vector<pair<ll, ll>> tree;

void init(int start, int end, int node) {
    if (start == end) {
        tree[node] = {arr[start], arr[start]};
        return;
    }
    int mid = (start + end) >> 1;
    init(start, mid, node*2);
    init(mid+1, end, node*2+1);

    pair<ll, ll> left = tree[node*2];
    pair<ll, ll> right = tree[node*2+1];

    tree[node].max_value = max(left.max_value, right.max_value);
    tree[node].min_value = min(left.min_value, right.min_value);
}

pair<ll, ll> search(int start, int end, int left, int right, int node) {
    if (right < start || left > end) return {0, 1000000001};
    if (start >= left && end <= right) return tree[node];
    int mid = (start + end) >> 1;

    pair<ll, ll> search_left = search(start, mid, left, right, node*2);
    pair<ll, ll> search_right = search(mid+1, end, left, right, node*2+1);
    pair<ll, ll> result;

    result.max_value = max(search_left.max_value, search_right.max_value);
    result.min_value = min(search_left.min_value, search_right.min_value);

    return result;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    // N, M (100,000)
    int N, M; cin >> N >> M;
    tree.resize(N*4);
    for (int i = 0; i < N; i++) {
        // temp (10억)
        ll temp; cin >> temp;
        arr.push_back(temp);
    }
    init(0, N-1, 1);

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        pair<ll, int> result = search(0, N-1, a-1, b-1, 1);
        cout << result.min_value << " " << result.max_value << "\n";
    }
    return 0;
}