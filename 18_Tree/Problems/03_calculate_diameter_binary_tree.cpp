// diameter of a tree = longest path between any two end nodes.

#include <iostream>
using namespace std;

template <typename T>
class TreeNode {
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

TreeNode<int> *buildTree() {
    cout << "Enter the data : ";
    int data;
    cin >> data;


    if (data == -1) {
        return NULL;
    }

    TreeNode<int>* root = new TreeNode<int>(data);

    // recursively calling itself
    cout << endl << "Enter the data for inserting in the left of : " << data << endl;
    root -> left = buildTree();

    cout << endl << "Enter the data for inserting in the right of : " << data << endl;;
    root -> right = buildTree();

    return root;
}


int height(TreeNode<int> *root){
    if (root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left, right) + 1;
    return ans;
}


int diameterOfBinaryTree(TreeNode<int> *root){
    // base case
	if (root == NULL) {
        return 0;
    }

    int option1 = diameterOfBinaryTree(root -> left);
    int option2 = diameterOfBinaryTree(root -> right);

    int option3 = height(root -> left) + height(root -> right) + 1;

    int ans = max(option1, max(option2, option3));

    return ans;
}


int main() {

    // Build the binary tree
    cout << "Enter elements of the binary tree:" << endl;
    TreeNode<int>* root = buildTree();

    // Calculate the number of leaf nodes
    int diameter = diameterOfBinaryTree(root);
    cout << endl;
    cout << "The diameter of the binary tree is : " << diameter << endl;

    return 0;
}

// TC = O(n)