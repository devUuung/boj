#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int value;

int recursion(const char* s, int ptr1, int ptr2) {
    value++;
    if (ptr1 >= ptr2) return 1;
    if (s[ptr1] != s[ptr2]) return 0;
    return recursion(s, ptr1+1, ptr2-1);
}

int isPalindrome(const char* s) {
    return recursion(s,0, strlen(s)-1);
}

int main() {
    int N;
    scanf("%d", &N);
    char txt[N][1001];
    for(int i = 0; i < N; i++) {
        scanf("%s", txt[i]);
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", isPalindrome(txt[i]));
        printf("%d\n", value);
        value = 0;
    }
}