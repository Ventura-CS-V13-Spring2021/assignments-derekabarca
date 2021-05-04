#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
               const float rateA = 15.00; 
               const float rateB = 12.00;
               const float rateC = 9.00;

               // Your Code Here.

               //variables

               int seats_soldA;
               int seats_sold_B;
               int seats_sold_C;

               float class_Atotal;
               float class_Btotal;
               float class_Ctotal;
               float total_income;


               //ask user for #seats sold
               cout << endl;
               cout << " Enter number of seats sold for Class A: ";
               cin >> seats_soldA;
               cout << seats_soldA << endl;

               cout << " Enter number of seats sold in Class B: ";
               cin >> seats_sold_B;
               cout << seats_sold_B << endl;

               cout << " Enter number of seats sold in class C: ";
               cin >> seats_sold_C;
               cout << seats_sold_C << endl;


               //calculate cost per section
               class_Atotal = rateA * seats_soldA;
               class_Btotal = rateB * seats_sold_B;
               class_Ctotal = rateC * seats_sold_C;


               //calculate total income
               total_income = class_Atotal + class_Btotal + class_Ctotal;


               //display income generated 
               cout << " Total income generated is: $" <<total_income << ".";

return 0;

}

