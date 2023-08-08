#include <iostream>
#include <algorithm>
using namespace std;
int arr[5];

int main() {
    for (int &i : arr) cin >> i;
    for (int i = 0; i < 5; i++) {
        if (count(&arr[0], &arr[5], arr[i]) % 2) {
            cout << arr[i];
            return 0;
        }
    }
    return 0;
}