#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr;
    while (N--) {
        int temp; cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    vector<int> sum(arr.size());
    partial_sum(arr.begin(), arr.end(), sum.begin());
    int result=0;
    for (int i = 0; i < arr.size(); i++) {
        result += sum[i];
    }
    cout << result;
    return 0;
}