#include <cstdio>
#include <iostream>

long long recursive(int A, int B, int C) {
    if (B == 1) return A % C;
    if (B % 2 == 0) return ((recursive(A, B / 2, C) % C) * (recursive(A, B / 2, C) % C)) % C;
    return A % C * recursive(A, B / 2, C) % C * recursive(A, B / 2, C) % C;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    std::cout << recursive(A, B, C) % C;
    return 0;
}