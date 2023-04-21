#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 8> arr;
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    int result = 1;
    for (int i = 0; i < 8; i++) {
        if (arr[i] != i+1) {
            result = 2;
            break;
        }
    }
    if (result == 2) {
        for (int i = 0; i < 8; i++) {
            if (arr[i] != 8 - i) {
                result = 0;
                break;
            }
        }
    }
    if (result == 0) cout << "mixed";
    if (result == 1) cout << "ascending";
    if (result == 2) cout << "descending";
    return 0;
}