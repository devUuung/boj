#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<double> nums;
    int temp = N;
    double max = 1;
    while (temp--) {
        double a; cin >> a;
        if (max < a) max = a;
        nums.push_back(a);
    }
    double sum = 0;
    for (double & num : nums) {
        sum += num * 100 / max;
    }
    cout << sum / (float) N;
    return 0;
}