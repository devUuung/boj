#include <iostream>
#include <map>

using namespace std;

int main() {
    int list[10] = {0,};
    map <int, int> map1;
    for (int i = 0; i < 10; i++) {
        cin >> list[i];
        if (map1.find(list[i]) != map1.end()) {
            map1[list[i]]++;
        } else {
            map1[list[i]] = 1;
        }
    }
    int sum = 0;
    int max = 0;
    int max_val;
    for (int i = 0; i < 10; i++) {
        sum += list[i];
        if (max < map1[list[i]]) {
            max = map1[list[i]];
            max_val = list[i];
        }
    }
    cout << sum / 10 << endl;
    cout << max_val << endl;

    return 0;
}