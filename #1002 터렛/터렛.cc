#include <iostream>
#include <cmath>

using namespace std;

void print(int value) {
    cout << value << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
        int x1, y1, x2, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int distance = pow(x1-x2, 2) + pow(y1-y2, 2);
        // 동일
        if (x1 == x2 && y1 == y2 && r1 == r2) print(-1);
        // 접하지 않을때
        else if (distance > pow(r1+r2, 2)) print(0);
        // 접함
        else if (distance == pow(r1+r2, 2)) print(1);
        else if (distance < pow(r1+r2, 2)) {
            // 내접
            if (distance == pow(r1 - r2, 2)) print(1);
            // 내부에 있는 경우
            else if (distance < pow(r1 - r2, 2)) print(0);
            // 두 원이 만나는 경우
            else if (distance > pow(r1 - r2, 2)) print(2);
        }

    }
    return 0;
}