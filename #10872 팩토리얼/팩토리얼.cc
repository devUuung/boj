#include <iostream>

using namespace std;

int factorial(int N) {
    if (N == 0) return 1;
    return factorial(N-1) * N;
}

int main() {
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}