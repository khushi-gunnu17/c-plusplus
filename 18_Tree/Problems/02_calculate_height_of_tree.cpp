// height of the tree = longest path between the root node and the leaf node

#include <iostream>
using namespace std;

class Node {
public :
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this -> data = data;
        this -> left = nullptr;
        this -> right = NULL;
    }
};


Node *buildTree(Node *root) {
    cout << "Enter the data : ";
    int data;
    cin >> data;

    root = new Node(data);

    if (data == -1) {
        return NULL;
    }

    // recursively calling itself
    cout << endl << "Enter the data for inserting in the left of : " << root -> data << endl;
    root -> left = buildTree(root -> left);

    cout << endl << "Enter the data for inserting in the right of : " << data << endl;;
    root -> right = buildTree(root -> right);

    return root;
}


//Function to find the height of a binary tree.
int height(Node* node){
    if (node == NULL) {
        return 0;
    }

    int left = height(node -> left);
    int right = height(node -> right);

    int ans = max(left, right) + 1;
    return ans;
}


int main() {

    Node* root = NULL;

    // creating a binary tree
    root = buildTree(root);

    int ans = height(root);

    cout << endl << "The height of the binary tree is : " << ans << endl;

    return 0;
}

// here, n is number of nodes
// TC = O(n)
// SC = O(height)