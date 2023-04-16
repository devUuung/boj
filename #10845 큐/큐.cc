#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string msg;
        cin >> msg;
        if (msg == "push") {
            int val;
            cin >> val;
            q.push(val);
        }
        else if (msg == "front") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if (msg == "back") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
        else if (msg == "size") {
            cout << q.size() << "\n";
        }
        else if (msg == "empty") {
            cout << q.empty() << "\n";
        }
        else if (msg == "pop") {
            if (q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }
    return 0;
}