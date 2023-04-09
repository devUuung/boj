#include <iostream>

using namespace std;

int fibonachi(int N) {
    if (N == 0) return 0;
    if (N == 1) return 1;
    return fibonachi(N-1) + fibonachi(N - 2);
}

int main() {
    int N;
    cin >> N;
    cout << fibonachi(N) << endl;
    return 0;
}