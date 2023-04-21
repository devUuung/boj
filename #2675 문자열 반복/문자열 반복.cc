#include <iostream>
#include <string>

using namespace std;

int main () {
    int N; cin >> N;
    while(N--) {
        int A;
        string msg;
        cin >> A >> msg;
        for (char i : msg) {
            for (int j = 0; j < A; j++) {
                cout << i;
            }
        }
        cout << "\n";
    }
    return 0;
}