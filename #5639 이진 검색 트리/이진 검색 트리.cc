#include <iostream>
using namespace std;

struct BST {
    int data=NULL;
    BST* leftChild=nullptr;
    BST* rightChild=nullptr;
};

void BST_insert(BST* node, BST* tree) {
    if (node->data < tree->data) {
        if (tree->leftChild == nullptr) {
            tree->leftChild = node;
        } else {
            BST_insert(node, tree->leftChild);
        }
    } else if (node->data > tree->data) {
        if (tree->rightChild == nullptr) {
            tree->rightChild = node;
        } else {
            BST_insert(node, tree->rightChild);
        }
    }
}

void print(BST* tree) {
    if (tree->leftChild != nullptr) print(tree->leftChild);
    if (tree->rightChild != nullptr) print(tree->rightChild);
    cout << tree->data << "\n";
}

BST TREE = {NULL, nullptr, nullptr};

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(0);
    int value; cin >> value;
    TREE.data = value;
    while(!cin.eof()) {
        int temp; cin >> temp;
        if (cin.eof()) break;
        BST* node = new BST;
        node->data = temp;
        BST_insert(node, &TREE);
    }
    print(&TREE);
    return 0;
}