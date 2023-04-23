#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    vector<int> heap;
    while (N--) {
        int A; cin >> A;
        if (!A) {
            if (heap.empty()) cout << 0 << "\n";
            else {
                cout << heap.front() << "\n";
                pop_heap(heap.begin(), heap.end());
                heap.pop_back();
            }
        }
        else {
            heap.push_back(A);
            push_heap(heap.begin(), heap.end());
        }
    }
    return 0;
}