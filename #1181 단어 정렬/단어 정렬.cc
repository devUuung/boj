#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

bool comp(string a, string b) {
    if (a.size() == b.size()) {
        int result = strcmp(a.c_str(), b.c_str());
        if (result > 0) return false;
        else if (result < 0) return true;
        else return false;
    } else {
        return a.size() < b.size();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<string> v;
    for (int i = 0; i < N; i++) {
        string msg;
        cin >> msg;
        v.push_back(msg);
    }
    sort(v.begin(), v.end(), comp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for (auto& element : v) cout << element << "\n";
    return 0;
}