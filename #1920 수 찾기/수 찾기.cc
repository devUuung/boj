#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> s;
    while (N--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> N;
    vector<int> v;
    while(N--) {
        int a;
        cin >> a;
        if (s.find(a) != s.end()) {
            v.push_back(1);
        } else {
            v.push_back(0);
        }
    }

    for (auto& element : v) {
        cout << element << "\n";
    }
    return 0;
}