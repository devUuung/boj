#include <iostream>
#include <vector>
using namespace std;
int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int n; cin >> n;
    vector<int> result;
    while (n != 1 && n != 0) {
        if (!((n - 1) % -2)) {
            result.push_back(1);
            n = (n - 1) / -2;
        }
        else {
            result.push_back(0);
            n = n / -2;
        }
    }
    if (n == 1) result.push_back(1);
    if (n == 0 && result.empty()) result.push_back(0);
    for (auto i = result.rbegin(); i != result.rend(); i++) {
        cout << *i;
    }
    return 0;
}