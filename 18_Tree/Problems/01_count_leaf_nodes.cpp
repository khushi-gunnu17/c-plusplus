#include <iostream>
using namespace std;

template<typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};


BinaryTreeNode<int> *buildTree() {
    cout << "Enter the data : ";
    int data;
    cin >> data;


    if (data == -1) {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);

    // recursively calling itself
    cout << endl << "Enter the data for inserting in the left of : " << data << endl;
    root -> left = buildTree();

    cout << endl << "Enter the data for inserting in the right of : " << data << endl;;
    root -> right = buildTree();

    return root;
}

void inOrder(BinaryTreeNode<int>* root, int &count) {
    // base case
    if (root == NULL) {
        return;
    }

    inOrder(root -> left, count);      // left
    
    // leaf node calculation
    if (root -> left == NULL && root -> right == NULL) {
        count++;
    }
    
    inOrder(root -> right, count);     // right
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    inOrder(root, cnt);
    return cnt;
}

int main() {

    // Build the binary tree
    cout << "Enter elements of the binary tree:" << endl;
    BinaryTreeNode<int>* root = buildTree();

    // Calculate the number of leaf nodes
    int leafNodeCount = noOfLeafNodes(root);
    cout << endl;
    cout << "Number of leaf nodes in the binary tree: " << leafNodeCount << endl;

    return 0;
}

// TC = O(n)