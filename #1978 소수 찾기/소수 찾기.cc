#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int cnt = 0;

void f(int n) {
    if (n == 1) return;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return;
    }
    cnt ++;
}

int main() {
    int N; cin >> N;
    vector<int> v;
    while(N--) {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    for (auto& element : v) {
        f(element);
    }
    cout << cnt;
    return 0;
}