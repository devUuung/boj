#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<bool> v;
    for (int i = 0; i <= b; i++) {
        v.push_back(false);
    }

    v[1] = true;
    for (int i = 2; i <= sqrt(b); i++) {
        if (v[i]) continue;
        for (int j = i + i; j <= b; j += i) v[j] = true;
    }

    for (int i=a; i <= b; i++) {
        if (!v[i]) cout << i << "\n";
    }


    return 0;
}