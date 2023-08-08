#include <bits/stdc++.h>
using namespace std;
vector<string> arr;
set<string> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N; cin >> N;
    int pos;
    string result;
    for (int i = 0; i < N; i++) {
        string temp; cin >> temp;
        if (temp == "?") pos = i;
        arr.push_back(temp);
        s.insert(temp);
    }
    int M; cin >> M;
    for (int i = 0; i < M; i++) {
        string temp; cin >> temp;
        bool key = false;
        if (arr.size() == 1) key = true;
        else if (arr.size() == pos+1 && temp.front() == arr[pos-1].back()) key = true;
        else if (pos == 0 && arr[pos+1].front() == temp.back()) key = true;
        else if (temp.front() == arr[pos-1].back() && temp.back() == arr[pos+1].front()) key = true;
        if (key && s.find(temp) == s.end()) result = temp;
    }
    cout << result;
    return 0;
}