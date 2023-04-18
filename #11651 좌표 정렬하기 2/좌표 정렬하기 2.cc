#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    while(N--) {
        int a, b;
        cin >> a >> b;
        pair<int, int> p = {b, a};
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for(auto& element : v) {
        cout << element.second << " " << element.first << "\n";
    }
    return 0;
}