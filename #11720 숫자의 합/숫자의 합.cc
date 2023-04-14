#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        char num;
        cin >> num;
        sum += (int) num - (int) '0';
    }
    cout << sum;
    return 0;
}