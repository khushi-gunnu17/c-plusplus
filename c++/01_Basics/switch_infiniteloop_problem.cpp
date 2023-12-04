// how to come out of an infinite loop in which there is a switch case ? 

#include <iostream>
using namespace std;

int main() {

    while(true) {
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch(choice) {
            case 1 : cout << "Case 1";
                     break;

            case 2 : cout << "Case 2";
                     break;
            
            case 3 : cout << "Case 3";
                     break;

            case 0 : cout << "Exiting the loop.\n";
                     return 0;      // This terminates the program 

            default : cout << "Invalid Choice. Try again.\n";
        }
    }

    return 0;
}