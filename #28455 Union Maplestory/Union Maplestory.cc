#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int>> result;

int main() {
    int N; cin >> N;
    int level = 0, stat = 0;
    for (int i = 0; i < N; i++) {
        int temp; cin >> temp;
        if (temp < 60) result.emplace_back(temp, 0);
        else if (temp < 100) result.emplace_back(temp, 1);
        else if (temp < 140) result.emplace_back(temp, 2);
        else if (temp < 200) result.emplace_back(temp, 3);
        else if (temp < 250) result.emplace_back(temp, 4);
        else result.emplace_back(temp, 5);
    }
    sort(result.rbegin(), result.rend());
    int max_index = 42;
    max_index = min(max_index, (int) result.size());
    for (int i = 0; i < max_index; i++) {
        level += result[i].first;
        stat += result[i].second;
    }
    cout << level << " " << stat;
    return 0;
}