#include <iostream>
using namespace std;

class Node {
    public : 
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};


void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


Node* reverse(Node* head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL) {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


Node* InsertAtTail(Node* &head, Node* &tail, int val) {
    Node* temp = new Node(val);

    if(head == NULL) {
        head = temp;
        tail = temp;
    } 
    else {
        tail -> next = temp;
        tail = temp;
    }
}


// Node* add(Node* first, Node* second) {
//     int carry = 0;
    
//     Node* ansHead = NULL;
//     Node* ansTail = NULL;

//     while(first != NULL && second != NULL) {
//         int sum = carry + first -> data + second -> data;
//         int digit = sum % 10;

//         // Creating a node and add in the answer linked list
//         InsertAtTail(ansHead, ansTail, digit);

//         carry = sum / 10;

//         first = first -> next;
//         second = second -> next;
//     }

//     while(first != NULL) {
//         int sum = carry + first -> data;
//         int digit = sum % 10;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum / 10;

//         first = first -> next;
//     }

//     while(second != NULL) {
//         int sum = carry + second -> data;
//         int digit = sum % 10;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum / 10;

//         second = second -> next;
//     }

//     while(carry != 0) {
//         int sum = carry;
//         int digit = sum % 10;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum / 10;
//     }

//     return ansHead;
// }


// second approach of writing add function

Node* add(Node* first, Node* second) {
    int carry = 0;
    
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL || carry != 0) {

        int val1 = 0;
        if(first != NULL) {
            val1 = first -> data;
        }

        int val2 = 0;
        if(second != NULL) {
            val2 = second -> data;
        }

        int sum = carry + val1 + val2;
        int digit = sum % 10;

        // Creating a node and add in the answer linked list
        InsertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;

        if(first != NULL)
            first = first -> next;

        if(second != NULL)
            second = second -> next;
    }

    return ansHead;
}



Node* addTwoLists(Node* first, Node* second) {
    // step 1 : reverse LL
    first = reverse(first);
    second = reverse(second);

    // step 2 : Add the two linked lists
    Node* ans = add(first, second);

    // step 3 : reverse the ans
    ans = reverse(ans);

    return ans;
}


int main() {

    Node* first = NULL;
    Node* tail = NULL;

    InsertAtTail(first, tail, 1);
    InsertAtTail(first, tail, 2);
    InsertAtTail(first, tail, 5);
    
    Node* anotherNode = new Node(2);
    Node* second = anotherNode;
    Node* tails = anotherNode;

    InsertAtTail(second, tails, 4);

    print(first);
    print(second);

    Node* added_values = addTwoLists(first, second);
    print(added_values);

    return 0;
}

// T.C. = O(m + n)
// S.C. = O(Max(m, n))