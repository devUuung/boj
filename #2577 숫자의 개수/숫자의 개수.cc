#include <iostream>

using namespace std;

int main() {
    int list[10] = {0,};
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int val = a * b * c;
    while (val / 10) {
        list[val % 10]++;
        val /= 10;
    }
    list[val % 10]++;
    for (int i = 0; i < 10; i++) {
        cout << list[i] << endl;
    }
    return 0;
}