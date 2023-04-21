#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> result;
    while (N--) {
        vector<int> v;
        string msg; cin >> msg;
        for (char i : msg) {
            if (i == 'O') {
                if (v.empty()) {
                    v.push_back(1);
                } else {
                    v.push_back(v.back() + 1);
                }

            } else {
                v.push_back(0);
            }
        }
        int sum=0;
        for (auto& i : v) {
            sum += i;
        }
        result.push_back(sum);
    }
    for (auto& i : result) {
        cout << i << "\n";
    }
    return 0;
}