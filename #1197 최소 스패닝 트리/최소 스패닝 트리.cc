#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int parent[10001];

int find(int a) {
    if (parent[a] == a) return a;
    else return parent[a] = find(parent[a]);
}

void uni(int a, int b) {
    int x = find(a);
    int y = find(b);
    parent[x] = y;
}

bool same(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (x == y) return true;
    return false;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int V, E;
    cin >> V >> E;
    vector<pair<int, pair<int, int>>> arr;
    for (int i = 0; i < E; i++) {
        int A, B, C; cin >> A >> B >> C;
        arr.push_back({C, {A, B}});
    }
    sort(arr.begin(), arr.end());
    for(int i = 1; i <= V; i++) parent[i] = i;
    int result = 0;
    for (auto & i : arr) {
        if (!same(i.second.first, i.second.second)) {
            uni(i.second.first, i.second.second);
            result += i.first;
        }
    }
    cout << result;
    return 0;
}

