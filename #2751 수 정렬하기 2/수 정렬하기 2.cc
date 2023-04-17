#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;
    vector<int> v;
    while(N--) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for (auto& element : v) {
        cout << element << "\n";
    }
    return 0;
}