// #include <iostream>
// using namespace std;

// class Node {
//     public: 
//     int data;
//     Node *next;

//     Node(int data) {
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int data) {
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail, int data) {
//     Node* temp = new Node(data);
//     tail -> next = temp;
//     tail = tail -> next;
// }

// void print(Node* &head) {
//     Node* temp = head;

//     while(temp != NULL) {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }   
//     cout << endl;
// }

// void insertAtPosition(Node* &tail, Node* &head, int position, int data) {

//     if(position == 1) {
//         insertAtHead(head, data);
//         return;
//     }

//     Node* temp = head;

//     int count = 1;
//     while(count < position-1) {
//         temp = temp -> next;
//         count++;
//     }

//     if(temp -> next == NULL) {
//         insertAtTail(tail, data);
//         return;
//     }

//     // creating a node for data 
//     Node* nodeToInsert = new Node(data);
//     nodeToInsert -> next = temp -> next;
//     temp -> next = nodeToInsert; 
// }

// int main() {
//     Node *node1 = new Node(10);
//     // cout << node1 -> data << endl;
//     // cout << node1 -> next << endl;

//     Node* head = node1;
//     Node* tail = node1;
//     print(head);

//     insertAtHead(head, 12);
//     print(head);

//     insertAtHead(head, 14);
//     print(head);

//     insertAtTail(tail, 87);
//     print(head);

//     insertAtPosition(tail, head, 3, 56);
//     print(head);

//     return 0;
// }


// Insert any position in a linked list.

#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    } 

    // destructor
    ~Node() {
        int value = this -> data;

        if(this -> next != NULL) {
            delete next;
            this -> next = NULL; 
        }
        cout << "Memory is free for node with data : " << value << endl;
    }
};

void InsertAtHead(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);

    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {
    Node *temp = new Node(d);

    tail -> next = temp;
    // tail = tail -> next;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* &tail, int position, int data) {

    // inserting at the start
    if(position == 1) {
        InsertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }

    // inserting at last position
    if(temp -> next == NULL) {
        InsertAtTail(tail, data);
        return;
    }

    // creating a node for the data 
    Node *nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head, Node* &tail) {
    
    if(position == 1) {
        Node *temp = head;
        head = head -> next;
        // memory free 
        temp -> next = NULL;
        delete temp;
    }

    else {
        // deleting any middle node or last
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next == NULL) {
            tail = prev;
            tail -> next = NULL;
        }

        prev -> next = curr -> next;
        delete curr;
    }
}

void print(Node* &head) {
    // created a new node here.
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(10);

    cout << node1 -> data << endl; 
    cout << node1 -> next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtPosition(head, tail, 3, 22);
    print(head);

    InsertAtPosition(head, tail, 1, 24);
    print(head);

    InsertAtPosition(head, tail, 6, 50);
    print(head);


    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    deleteNode(6, head, tail);
    print(head);

    cout << "Head : " << head -> data << endl;
    cout << "Tail : " << tail -> data << endl;

    return 0;
}