#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    vector<int> rowOps(N, 0);
    vector<int> colOps(M, 0);

    for (int i = 0; i < Q; i++) {
        int type, r, v;
        scanf("%d %d %d", &type, &r, &v);

        if (type == 1) {
            rowOps[r - 1] += v;
        } else if (type == 2) {
            colOps[r - 1] += v;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", rowOps[i]+colOps[j]);
        }
        printf("\n");
    }

    return 0;
}
