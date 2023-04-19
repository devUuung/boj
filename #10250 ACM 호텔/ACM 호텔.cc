#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T; cin >> T;
    vector<int> v;
    while(T--) {
        int H, W, N;
        cin >> H >> W >> N;
        if (N % H == 0) {
            v.push_back(H * 100 + N / H);
        } else v.push_back(N % H * 100 + N / H + 1);
    }

    for (auto& element : v) {
        cout << element << "\n";
    }
    return 0;
}