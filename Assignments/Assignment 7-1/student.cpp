#include "student.hpp"
#include "address.hpp"
#include "DOB.hpp"
#include <iostream>
#include <string>

using namespace std;

Student::Student()
{
}
Student::Student(string stname, int idnum, DOB date, Address addr)
{
}
int Student::getID() const
{
  return id;
}
