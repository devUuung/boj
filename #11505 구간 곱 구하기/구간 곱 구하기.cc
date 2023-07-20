#include <cstdio>
#include <vector>

using namespace std;
#define ll long long
#define module 1'000'000'007

vector<ll> arr;
vector<ll> tree;

void init(int start, int end, int node) {
    if (start == end) {
        tree[node] = arr[start] % module;
        return;
    }
    int mid = start + (end - start) / 2;
    init(start, mid, node * 2);
    init(mid + 1, end, node * 2 + 1);
    tree[node] = ((tree[node*2] % module) * (tree[node*2+1] % module)) % module;
}

ll dot(int start, int end, int node, int left, int right) {
    if (left > end || right < start) return 1;
    if (left <= start && end <= right) return tree[node];
    int mid = start + (end - start) / 2;
    return ((dot(start, mid, node * 2, left, right) % module) * (dot(mid+1, end, node * 2 + 1, left, right) % module)) % module;
}

ll update(int start, int end, int node, int index, ll pre, ll post) {
    if (index < start || index > end) return tree[node];
    if (start == end) return tree[node] = post;
    int mid = start + (end - start) / 2;
    return tree[node] = update(start, mid, node * 2, index, pre, post) * update(mid+1, end, node * 2 + 1, index, pre, post) % module;
}

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    arr.resize(N+1);
    tree.resize(N * 4);
    for (int i = 1; i <= N; i++) {
        scanf("%lld", &arr[i]);
    }
    init(1,N, 1);
    for (int i = 0; i < M+K; i++) {
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a == 1) {
            // 변경
            update(1, N, 1, b, arr[b], c);
            arr[b] = c;
        } else {
            // 출력
            printf("%lld\n", dot(1, N, 1, b, c));
        }
    }
    return 0;
}