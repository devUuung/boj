#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    set<int> s;
    while(N--) {
        int temp; cin >> temp;
        s.insert(temp);
    }
    for(auto i : s) {
        cout << i << " ";
    }
    return 0;
}