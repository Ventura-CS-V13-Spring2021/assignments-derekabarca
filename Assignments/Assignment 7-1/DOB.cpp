#include "DOB.hpp"
#include "address.hpp"
#include "student.hpp"
#include <iostream>
#include <string>
using namespace std;

DOB::DOB(int m, int d, int y) : month(m), day (d), year(y)
{
} 
int DOB::getMonth() const;
{
  return month;
}
int DOB::getDay() const;
{
  return day;
}
int DOB::getYear() const;
{
  return year;
}
void DOB::printDate() const;
{
  cout << "Date (MM/DD/YYYY): ";
  cout << month << "/" << day << "/" << year << "." << endl;
}
//Prints DOB in MM/DD/YYYY format 
void DOB::setDOB(int m, int d, int y);
{
  month = m;
  date = d;
  year = y;
}
void DOB::setMonth(int m);
{
  month = m;
}
void DOB::setDay(int d);
{
  day = d;
}
void DOB::setYear(int y);
{
  year = y;
}