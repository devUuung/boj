#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> arr;
vector<ll> tree;

void init(int start, int end, int node) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) >> 1;
    init(start, mid, node*2);
    init(mid+1, end, node*2+1);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll sum(int start, int end, int left, int right, int node) {
    if (right < start || left > end) return 0;
    if (left <= start && right >= end) {
        return tree[node];
    }
    int mid = (start + end) >> 1;
    ll left_child = sum(start, mid, left, right, node*2);
    ll right_child = sum(mid+1, end, left, right, node*2+1);
    return left_child + right_child;
}

void update(int start, int end, int index, ll diff, int node) {
    if (index < start || index > end) return;
    tree[node] = tree[node] + diff;
    if (start != end) {
        int mid = (start + end) >> 1;
        update(start, mid, index, diff, node*2);
        update(mid+1, end, index, diff, node*2+1);
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout.tie(0);
    int N, M, K; cin >> N >> M >> K;
    arr.resize(N);
    int height = ceil(log2(N));
    int tree_size = 1 << (height + 1);
    tree.resize(tree_size);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    init(0, N-1, 1);
    for (int i = 0; i < M + K; i++) {
        int a, b; ll c; cin >> a >> b >> c;
        if (a == 1) {
            update(0, N-1, b-1, c - arr[b-1], 1);
            arr[b-1] = c;
        }
        else if(a == 2) {
            cout << sum(0, N-1, b-1, (int)c-1, 1) << "\n";
        }
    }
    return 0;
}