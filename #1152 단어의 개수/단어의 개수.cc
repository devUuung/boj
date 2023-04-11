#include <iostream>
#include <string>

using namespace std;

int main() {
    string msg;
    getline(cin, msg);
    int cnt = 1;

    for (int  i = 0;  i < msg.length(); i++) {
        if ((int) msg[i] == (int) ' ') cnt++;
    }
    if (msg[0] == ' ') cnt--;
    if (msg[msg.length() - 1] == ' ') cnt--;
    cout << cnt;
    return 0;
}