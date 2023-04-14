#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입력받기, 나머지 구하기
    array<int, 10> arr;
    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp % 42;
    }

    vector<int> finded;
    finded.push_back(arr[0]);
    for(int i = 1; i < 10; i++) {
        auto it = find(finded.begin(), finded.end(), arr[i]);
        if (it == finded.end()) finded.push_back(arr[i]);
    }

    cout << finded.end() - finded.begin();
    return 0;
}