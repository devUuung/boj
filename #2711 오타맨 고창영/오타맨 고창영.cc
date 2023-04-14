#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    vector<string> msg;
    for (int i = 0; i < T; i++) {
        int num;
        string temp;
        cin >> num >> temp;
        temp.replace(num-1, 1, "");
        msg.push_back(temp);
    }
    for (auto& m : msg) {
        cout << m << "\n";
    }
}