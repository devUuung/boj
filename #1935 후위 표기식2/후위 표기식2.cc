#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    string msg; cin >> msg;
    map<char, double> m;
    for (int i = 0; i < N; i++) {
        double val; cin >> val;
        m.insert({(char) 65+i, val});
    }
    vector<double> v;
    for (char element : msg) {
        if (element == '+') {
            double a = v.back(); v.pop_back();
            double b = v.back(); v.pop_back();
            v.push_back(a+b);
        }
        else if (element == '-') {
            double a = v.back(); v.pop_back();
            double b = v.back(); v.pop_back();
            v.push_back(b-a);
        }
        else if (element == '*') {
            double a = v.back(); v.pop_back();
            double b = v.back(); v.pop_back();
            v.push_back(a*b);
        }
        else if (element == '/') {
            double a = v.back(); v.pop_back();
            double b = v.back(); v.pop_back();
            v.push_back(b/a);
        }
        else {
            v.push_back(m[element]);
        }
    }
    cout << fixed << setprecision(2) << v[0];
    return 0;
}