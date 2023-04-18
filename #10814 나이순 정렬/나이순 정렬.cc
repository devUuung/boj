#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, string>> v;
    while(N--) {
        string a;
        int b;
        cin >> b >> a;
        pair<int, string> p = {b, a};
        v.push_back(p);
    }
    stable_sort(v.begin(), v.end(), comp);

    for (auto& element : v) {
        cout << element.first << " " << element.second << "\n";
    }
    return 0;
}