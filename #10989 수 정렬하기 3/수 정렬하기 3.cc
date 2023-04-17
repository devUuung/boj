#include <iostream>
#include <array>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, val;
    cin >> N;
    array<int, 10001>arr = {0,};
    for (int i = 0; i < N; i++) {
        cin >> val;
        arr[val]++;
    }
    for (int i = 0; i < 10001; i++) {
        while (arr[i]--) printf("%d\n", i);
    }
    return 0;
}