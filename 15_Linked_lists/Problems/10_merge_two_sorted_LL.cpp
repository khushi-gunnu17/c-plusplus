#include <iostream>
using namespace std;
template <typename T>

class Node {
    public :
    T data;
    Node* next;

    Node(T data) {
        this -> data = data;
        this -> next = NULL;
    }
};


Node<int>* print(Node<int>* &node) {
    Node<int>* temp = node;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
    return node;
}


Node<int>* solve(Node<int>* first, Node<int>* second) {

    // If only one element is present in the first list
    if(first -> next == NULL) {
        first -> next = second;
        return first;
    }

    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;

    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    while(next1 != NULL && curr2 != NULL) {
        if((curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data)) {
            // adding node in between the first list
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            // updating pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            // go one step ahead in the first list.
            // move curr1 and next1 forward.
            curr1 = next1;
            next1 = next1 -> next;

            if(next1 == NULL) {
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second) {
    if (first == NULL) {
        return second;
    }
    
    if (second == NULL) {
        return first;
    }

    if (first -> data <= second -> data) {
        solve(first, second);
    }  else {
        solve(second, first);
    }
} 


int main() {

    Node<int>* first = new Node<int>(1);
    first -> next = new Node<int>(3);
    first -> next -> next = new Node<int>(5);

    Node<int>* second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(5);

    Node<int>* sortedList = sortTwoLists(first , second);

    print(sortedList);


    // dynamically deletion of memory
    delete first;
    delete second;
    delete sortedList;

    return 0;
}

// T.C. = 