#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int,5> max_score;

    // 입력받음
    array<array<int, 4>,5> arr;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // max_score에 점수합을 담음
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        max_score[i] = sum;
    }

    array<int, 2> result = {-1, -1};

    for (int i = 0; i < 5; i++) {
        if (result[0] < max_score[i]) {
            result[0] = max_score[i];
            result[1] = i+1;
        }
    }

    cout << result[1] << " " << result[0];

    return 0;
}