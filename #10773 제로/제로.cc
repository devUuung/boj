#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int K;
    cin >> K;
    vector<int> s;
    while(K--) {
        int temp;
        cin >> temp;
        if (!temp) s.pop_back();
        else s.push_back(temp);
    }
    int result = 0;
    for (auto& element : s) {
        result += element;
    }
    cout << result;
    return 0;
}