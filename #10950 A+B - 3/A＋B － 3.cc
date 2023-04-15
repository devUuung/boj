#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        arr.push_back(A + B);
    }
    for (auto& element : arr) {
        cout << element << "\n";
    }
    return 0;
}