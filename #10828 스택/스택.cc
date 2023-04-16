#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    stack<int> v;
    for (int i = 0; i < N; i++) {
        string msg;
        cin >> msg;
        if (msg == "push") {
            int val;
            cin >> val;
            v.push(val);
        }
        else if (msg == "top") {
            if (v.empty()) cout << -1 << "\n";
            else cout << v.top() << "\n";
        }
        else if (msg == "size") {
            cout << v.size() << "\n";
        }
        else if (msg == "empty") {
            cout << v.empty() << "\n";
        }
        else if (msg == "pop") {
            if (v.empty()) cout << -1 << "\n";
            else {
                cout << v.top() << "\n";
                v.pop();
            }
        }
    }
    return 0;
}