#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    vector<int> v;
    while(cin >> a >> b >> c) {
        if (!a && !b && !c) break;
        // a가 가장 크고 직각 삼각형
        if (a > b && a > c && a*a == b*b + c*c) v.push_back(1);
        // b가 가장 큰 경우
        else if (b > a && b > c && b*b == a*a + c*c) v.push_back(1);
        // c가 가장 큰 경우
        else if (c > a && c > b && c*c == a*a + b*b) v.push_back(1);
        else v.push_back(0);
    }
    for (auto& element : v) {
        cout << (element ? "right\n" : "wrong\n");
    }
    return 0;
}