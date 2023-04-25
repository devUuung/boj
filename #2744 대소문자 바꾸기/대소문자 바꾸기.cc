#include <bits/stdc++.h>
using namespace std;
int main() {
    string msg; cin >> msg;
    for(auto& element : msg) {
        if (element >= 'a' && element <= 'z') cout << (char) toupper(element);
        if (element >= 'A' && element <= 'Z') cout << (char) tolower(element);
    }
}