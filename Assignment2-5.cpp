#include <iostream>
using namespace std;

int main() {

    int num, i, range1, range2;

    cout << "Enter your range from 1-100:\n ";
    cin >> range1 >> range2;
    cout << "Range: " << "[" << range1 << " , " << range2 << "]" << endl;

    for (num = range1; num <= range2; num++){
        for (i = 2; i<num; i++){
            if (num % 5 == 0)
                break;
        }
        if (i == num)
            cout << num << " is a prime number. \n";
        else
            cout << num << " is not a prime number. \n";
    }
    
    return 0;
}
