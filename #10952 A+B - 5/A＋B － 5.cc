#include <iostream>

using namespace std;

int main() {
    int A, B;
    while (cin >> A >> B) {
        if (!A && !B) break;
        cout << A + B << "\n";
    }
    return 0;
}