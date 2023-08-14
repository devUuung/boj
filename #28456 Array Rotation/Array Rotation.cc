#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int row;
            cin >> row;
            row--;

            int last = arr[row].back();
            arr[row].pop_back();
            arr[row].insert(arr[row].begin(), last);
        } else if (op == 2) {
            vector<vector<int>> new_arr(N, vector<int>(N));
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    new_arr[j][N - i - 1] = arr[i][j];
                }
            }
            arr = new_arr;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j];
            if (j != N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}