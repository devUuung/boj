#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<int> arr;
    while (N--) {
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    reverse(arr.begin(), arr.end());
    int result = 0;
    for (auto money : arr) {
        int a = K / money;
        result += a;
        K -= a * money;
        if (!K) break;
    }
    cout << result;
    return 0;
}