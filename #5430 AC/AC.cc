#include <bits/stdc++.h>
using namespace std;

vector<int> f(deque<int> q, const string& msg) {
    int isFront = 1;
    for (auto m : msg) {
        if (m == 'R') isFront = isFront ^ 1;
        else {
            if (q.empty()) {
                vector<int> result;
                result.push_back(0);
                return result;
            }
            if (isFront) q.pop_front();
            else q.pop_back();
        }
    }
    vector<int> result;
    if (isFront) {
        while (!q.empty()) {
            result.push_back(q.front());
            q.pop_front();
        }
    } else {
        while (!q.empty()) {
            result.push_back(q.back());
            q.pop_back();
        }
    }

    return result;
}

int main() {
    int T; cin >> T;
    while (T--) {
        string msg1; cin >> msg1;
        int n; cin >> n;
        deque<int> q;
        string msg2; cin >> msg2;
        msg2 = msg2.substr(1, msg2.length() - 2);
        char ch[msg2.length()];
        strcpy(ch, msg2.c_str());
        char *token = strtok(ch, ",");
        while (token != NULL) {
            q.push_back(stoi(token));
            token = strtok(NULL, ",");
        }
        vector<int> result = f(q, msg1);
        if (result.empty()) cout << "[]";
        else if (result[0] == 0) cout << "error";
        else {
            cout << "[";
            for (int i = 0; i < result.size()-1; i++) {
                cout << result[i] << ",";
            }
            cout << result[result.size()-1];
            cout << "]";
        }
        cout << "\n";
    }
    return 0;
}