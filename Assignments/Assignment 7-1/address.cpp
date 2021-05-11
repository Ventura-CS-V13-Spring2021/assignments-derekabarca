#include "address.hpp"
#include "student.hpp"
#include "DOB.hpp"
#include <iostream>
#include <string>

using namespace std;

Address::Address()
{
}
Address:Address(string str, string st, int z)
{
}
string Address::getStreet() const
{
  return street;
}
string Address::getState() const
{
  return state;
}
int Address::getZip() const
{
  return zip;
}
void Address::printAddress() const
{
  cout << "State: " << state << endl;
  cout << "Street: " << street << endl;
  cout << "Zipcode: " << zip << endl;
  cout << " " << endl;
}