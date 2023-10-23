#include <iostream>
using namespace std;

struct bstNode {
    int data;
    bstNode* right;
    bstNode* left;
};

bstNode* createNode (int value) {
    bstNode* newNode = new bstNode();
    newNode->data = value;
    newNode->right = newNode->left = NULL;
    return newNode;
}

bstNode* insert (bstNode* root, int value) {
    if (root == NULL) {
        root = createNode(value);
    } else if (value <= root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search (bstNode* root, int value) {
    // root here = root of current sub tree

    if (root == NULL) {
        return false;
    } else if (root->data == value) {
        return true;
    } else if (value <= root->data) {
        return search(root->left, value);
    } else if (value > root->data) {
        return search(root->right, value);
    }
}

int main () {  
    int num;
    bstNode* root = NULL;

    root = insert(root, 12);
    root = insert(root, 24);
    root = insert(root, 3);

    cout << "enter number to search : " << endl;
    cin >> num;

    if(search(root, num) == true) {
        cout << "founded!";
    } else {
        cout << "not fount";
    }

}







