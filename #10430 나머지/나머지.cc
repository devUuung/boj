#include <iostream>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int A, B, C; cin >> A >> B >> C;
    cout << (A+B)%C << "\n" << (A+B)%C << "\n" << (A*B)%C << "\n" << (A*B)%C;
    return 0;
}