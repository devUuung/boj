#include <iostream>

using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int x, y; cin >> x >> y;
        long distance = y - x;
        long n = 1;
        while (true) {
            if (distance <= 3) {
                cout << distance << "\n";
                break;
            }
            if (n * n >= distance) {
                cout << 2 * n - 1 << "\n";
                break;
            }
            if ((n+1) * n >= distance) {
                cout << 2*n << "\n";
                break;
            }
            n++;
        }
    }
    return 0;
}