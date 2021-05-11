#include "coordinate.hpp"
#include "rectangle.hpp"
#include <string>
#include <iostream>
using namespace std;

Coordinate::Coordinate(): x(0), y(0)
{
}
Coordinate::Coordinate(double xval, double yval)
{
}
int Coordinate::getX() const
{
  return x;
}
int Coordinate::getY() const
{
  return y;
}
void Coordinate::setXY(double xval, double yval)
{
  xval = x;
  yval = y;
}
void Coordinate::printXY() const
{
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
}