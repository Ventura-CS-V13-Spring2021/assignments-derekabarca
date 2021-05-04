#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << " Enter your choice between A, B, or C. \n";
    cin >> choice;
    switch (choice){

        case 'A':
        case 'a':
        cout << "You entered A. \n";
        break; 

        case 'B':
        case 'b':
        cout << " You entered B. \n";
        break;

        case 'C':
        case 'c':
        cout << " You entered C \n";
        break;

        default:
        cout << "That was not one of the choices. \n";

    }


    return 0;
}
