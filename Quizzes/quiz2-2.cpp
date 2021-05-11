#include <iostream>
using namespace std;

int main() {

<<<<<<< HEAD
<<<<<<< HEAD
     int i, a, b, c, d, e;

    for (i=0; i<=5; i+=10)
    {
        a = rand() % 100;         
        b = rand() % 100;     
        c = rand() % 100;
        d = rand() % 100;
        e = rand() % 100;   

        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;


        
    }

    return 0;
}
=======
=======
>>>>>>> origin/main
    int num, i, range1, range2;

    cout << "Enter your range from 1-100:\n ";
    cin >> range1 >> range2;
    cout << "Range: " << "[" << range1 << " , " << range2 << "]" << endl;

    for (num = range1; num <= range2; num++){
        for (i = 2; i<num; i++){
            if (num % 100 == 0)
                break;
        }
        if (i == num)
            cout << num << " is a prime number. \n";
        else
            cout << num << " is not a prime number. \n";
    }
    
    return 0;
}
<<<<<<< HEAD
>>>>>>> origin/main
=======
>>>>>>> origin/main
