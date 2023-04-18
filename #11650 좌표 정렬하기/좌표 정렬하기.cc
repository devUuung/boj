#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    while (N--) {
        int a, b;
        cin >> a >> b;
        pair<int, int> p = {a, b};
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for (auto& element : v) {
        cout << element.first << " " << element.second << "\n";
    }

    return 0;
}