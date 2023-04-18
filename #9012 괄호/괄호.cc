#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> v;
    while(N--) {
        stack<char> arr;
        string msg;
        cin >> msg;
        for (auto& element : msg) {
            if (element == ')') {
                if (!arr.empty()) arr.pop();
                else {
                    arr.push(')');
                    break;
                }
            } else {
                arr.push(element);
            }
        }
        if (!arr.empty()) v.push_back("NO");
        else v.push_back("YES");
    }

    for (auto& element : v) {
        cout << element << "\n";
    }

    return 0;
}