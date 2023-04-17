#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string msg;
    vector<string> v;
    while(cin >> msg) {
        if (msg == "0") break;
        string first = msg.substr(0, msg.size() / 2);
        string second;
        if (msg.size() % 2) second = msg.substr(msg.size() / 2 + 1);
        else second = msg.substr(msg.size() / 2);
        reverse(second.begin(), second.end());
        if (!strcmp(first.c_str(), second.c_str())) v.push_back("yes");
        else v.push_back("no");
    }
    for (auto& element : v) {
        cout << element << "\n";
    }
    return 0;
}