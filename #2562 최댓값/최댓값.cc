#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 2> max = {-1, -1};
    for (int i = 0; i < 9; i++) {
        int temp;
        cin >> temp;
        if (max[0] < temp) {
            max[0] = temp;
            max[1] = i+1;
        }
    }
    cout << max[0] << "\n" << max[1];
    return 0;
}