#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    int A;
    int smallest = 1000000, largest = -1000000;
    for (int i = 0; i < N; i++) {
        cin >> A;
        smallest = min(smallest, A);
        largest = max(largest, A);
    }
    cout << smallest << " " << largest;
}