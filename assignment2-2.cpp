#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     cout << number1 << ", " << number2 << ", " << number3 << ", " << endl;


     // Your code 

     if (number1 != number2 && number1 != number3 && number2 != number3)
     cout << " All numbers are distinct. ";

     if (number1 == number2 && number1 == number3)
     cout << " All numbers are the same. ";

     if (number1 == number2)
     cout << "First two values are duplicates. ";

     if (number1 == number3)
     cout << " First and third values are duplicates. ";

     if (number2 == number3)
     cout << " Second and third values are duplicates. ";



     return 0;
}
