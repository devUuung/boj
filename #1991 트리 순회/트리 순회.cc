#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    char name;
    Node* left;
    Node* right;
};

void preOrder(Node node);
void inOrder(Node node);
void postOrder(Node node);

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int N; cin >> N;
    vector<Node> v;
    for (int i = 0; i < N; i++) {
        Node temp{};
        temp.name = (char)(65+i);
        v.push_back(temp);
    }
    Node none{};
    none.name = 'n';
    while (N--) {
        char A, B, C; cin >> A >> B >> C;
        if (B != '.') v[(int)A - 65].left = &v[int(B)-65];
        else v[(int)A - 65].left = &none;
        if (C != '.') v[(int)A - 65].right = &v[int(C)-65];
        else v[(int)A - 65].right = &none;
    }
    preOrder(v[0]); cout << "\n";
    inOrder(v[0]); cout << "\n";
    postOrder(v[0]); cout << "\n";
    return 0;
}

void preOrder(Node node) {
    if (node.name == 'n') return;
    cout << node.name;
    preOrder(*node.left);
    preOrder(*node.right);
}

void inOrder(Node node) {
    if (node.name == 'n') return;
    inOrder(*node.left);
    cout << node.name;
    inOrder(*node.right);
}

void postOrder(Node node) {
    if (node.name == 'n') return;
    postOrder(*node.left);
    postOrder(*node.right);
    cout << node.name;
}