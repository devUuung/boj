#include <iostream>

using namespace std;

int main() {
    int num_of_people = 0;
    int max = 0;
    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        num_of_people -= a;
        num_of_people += b;
        if (max < num_of_people) max = num_of_people;
    }
    cout << max;
    return 0;
}