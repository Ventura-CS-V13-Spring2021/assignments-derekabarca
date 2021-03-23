#include <iostream>
using namespace std;

int main() {

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