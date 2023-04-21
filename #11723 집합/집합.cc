#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    unordered_set<int> S;
    int N; cin >> N;
    while (N--) {
        string msg; int num;
        cin >> msg;
        if (msg == "add") {
            cin >> num;
            S.insert(num);
        }
        else if (msg == "remove") {
            cin >> num;
            S.erase(num);
        }
        else if (msg == "check") {
            cin >> num;
            cout << S.count(num) << "\n";
        }
        else if (msg == "toggle") {
            cin >> num;
            if (S.count(num)) S.erase(num);
            else S.insert(num);
        }
        else if (msg == "all") for (int i = 1; i <= 20; i++) S.insert(i);
        else if (msg == "empty") S.clear();
    }
    return 0;
}
