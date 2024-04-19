// Tree is a non linear data structure.
/*
It is a collection of nodes that are connected by edges and has a hierarchical relationship between the nodes. 
The topmost node of the tree is called the root, and the nodes below it are called the child nodes. Each node 
can have multiple child nodes, and these child nodes can also have their own child nodes, forming a recursive 
structure.
*/

/*
Types of Tree data structures:

Binary Tree : In a binary tree, each node can have a maximum of two children linked to it. Some common types of 
binary trees include full binary trees, complete binary trees, balanced binary trees, and degenerate or 
pathological binary trees.

Ternary Tree: A Ternary Tree is a tree data structure in which each node has at most three child nodes, usually 
distinguished as “left”, “mid” and “right”.

N-ary Tree or Generic Tree: Generic trees are a collection of nodes where each node is a data structure that 
consists of records and a list of references to its children(duplicate references are not allowed). Unlike the 
linked list, each node stores the address of multiple nodes. b
*/

#include <iostream>
#include <queue>
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


// also known as Breadth first Search
void levelOrderTraversal(Node* root) {
    queue<Node*> q;

    q.push(root);
    q.push(NULL);   // separator

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // earlier level is traversed
        if (temp == NULL) {
            cout << endl;

            if(!q.empty()) {
                q.push(NULL);
            }
        } 
        else {
            cout << temp -> data << " " ;

            // condition = if temp left is not NULL
            if (temp -> left) {
                q.push(temp -> left);
            }

            // condition = if temp right is not NULL
            if (temp -> right) {
                q.push(temp -> right);
            }
        }
        
    }
}


Node* buildFromLevelOrder(Node* root) {
    queue<Node*> q;
    cout << "Enter data for root : ";
    int data;
    cin >> data;
    root = new Node(data);

    q.push(root);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node data for the value, " << temp -> data << " : " << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node data for the value, " << temp -> data << " : "  << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
    }

    return root;
}


// LNR traversal
void inOrder(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    inOrder(root -> left);      // left
    cout << root -> data << " ";        // Node
    inOrder(root -> right);     // right
}


// NLR traversal
void preOrder(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    cout << root -> data << " ";        // Node
    preOrder(root -> left);      // left
    preOrder(root -> right);     // right
}


// LRN traversal
void postOrder(Node* root) {
    // base case
    if (root == NULL) {
        return;
    }

    postOrder(root -> left);      // left
    postOrder(root -> right);     // right
    cout << root -> data << " ";        // Node
}


int main() {

    Node *root = NULL;


    // Building a tree from level order traversal
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
    root = buildFromLevelOrder(root);
    levelOrderTraversal(root);


/*
    // creating a binary tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order traversal;
    cout << endl << "Printing the level order traversal : " << endl;
    levelOrderTraversal(root);

    cout << endl << "Inorder traversal is : " << endl;
    inOrder(root);

    cout << endl << "preOrder traversal is : " << endl;
    preOrder(root);

    cout << endl << "postOrder traversal is : " << endl;
    postOrder(root);

*/


    return 0;
}

// HW = reverse level order traversal 
// Do the traversals without iterations in inOrder, preOrder and postOrder.