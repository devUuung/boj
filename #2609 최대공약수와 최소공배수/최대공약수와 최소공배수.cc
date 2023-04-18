#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << "\n";
    cout << A * B / gcd(A, B) << "\n";
    return 0;
}