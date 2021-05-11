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
