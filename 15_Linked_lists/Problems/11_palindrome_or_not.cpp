#include <iostream>
#include <vector>
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

void InsertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}


void InsertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);

    tail -> next = temp;
    tail = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Approach 1
// palindrome checking through converting it into an array.
bool checkPalindrome(vector<int> arr) {
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        if(arr[start] != arr[end]) {
            return 0;
        } 
        start++;
        end--;
    }
    return 1;
}

// bool isPalindrome(Node* head) {
//     vector<int> arr;

//     Node* temp = head;

//     while(temp != NULL) {
//         arr.push_back(temp -> data);
//         temp = temp -> next;
//     }

//     return checkPalindrome(arr);
// }


// Approach 2
Node* getMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;
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

bool isPalindrome(Node* head) {
    if(head -> next == NULL || head == NULL) {
        return true;
    }

    // step 1 : get the middle
    Node* middle = getMiddle(head);

    // step 2 : reverse list after middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    // step 3 : compare both halves
    Node* head1 = head;
    Node* head2 = middle -> next;

    while(head2 != NULL) {
        if(head1 -> data != head2 -> data) {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    // step 4 : repeat step 2, so as to not change the original structure of the linked list.
    middle -> next = reverse(temp);

    return true;
}


int main() {

    Node* newNode = new Node(5);

    Node* head = newNode;
    Node* tail = newNode;

    InsertAtHead(head, 4);
    InsertAtHead(head, 3);
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 1);

    print(head);

    if(isPalindrome(head)) {
        cout << "The Linked List is a palindrome.";
    } else {
        cout << "It's not a palindrome.";
    }

    return 0;
}

// T.C. = O(n)
// S.C. = O(n) for second O(1)