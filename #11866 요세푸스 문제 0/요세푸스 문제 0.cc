#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N, K; cin >> N >> K;
    deque<int> v;
    deque<int> result;
    for (int i = 0; i < N; i++) {
        v.push_back(i+1);
    }
    while(!v.empty()) {
        for (int i = 0; i < K-1; i++) {
            v.push_back(v.front());
            v.pop_front();
        }
        result.push_back(v.front());
        v.pop_front();
    }
    cout << "<";
    for (int i = 0; i < N-1; i++) {
        cout << result[i] << ", ";
    }
    cout << result[N-1] << ">";
    return 0;
}