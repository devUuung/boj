#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    deque<int> arr;
    while(N--) {
        string msg;
        cin >> msg;
        if (msg == "push_front") {
            int val;
            cin >> val;
            arr.push_front(val);
        }
        else if (msg == "push_back") {
            int val;
            cin >> val;
            arr.push_back(val);
        }
        else if (msg == "pop_front") {
            if (arr.empty()) cout << -1 << "\n";
            else {
                cout << arr.front() << "\n";
                arr.pop_front();
            }
        }
        else if (msg == "pop_back") {
            if (arr.empty()) cout << -1 << "\n";
            else {
                cout << arr.back() << "\n";
                arr.pop_back();
            }
        }
        else if (msg == "size") {
            cout << arr.size() << "\n";
        }
        else if (msg == "empty") {
            cout << arr.empty() << "\n";
        }
        else if (msg == "front") {
            if (arr.empty()) cout << -1 << "\n";
            else {
                cout << arr.front() << "\n";
            }
        }
        else if (msg == "back") {
            if (arr.empty()) cout << -1 << "\n";
            else {
                cout << arr.back() << "\n";
            }
        }
    }
    return 0;
}