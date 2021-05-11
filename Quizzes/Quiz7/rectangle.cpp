#include "coordinate.hpp"
#include "rectangle.hpp"
#include <iostream>
#include <string>
using namespace std;

Rectangle::Rectangle()
{
  coordinate x;
  coordinate y;
  setLBRT(x,y);
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval): lb(lbval), rt(rtval)
{
}
Coordinate Rectangle::getLB() const
{
  return lb;
}
Coordinate Rectangle::getRT() const
{
  return rt;
}
double Rectangle::getArea()
{
  return area;
}
Coordinate Rectangle::getCenter()
{
  return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
  lbval = lb;
  rtval = rt;
}
void Rectangle::printRectangle() const
{
  cout << "Bottom left point: "
  lb.printXY();
  cout << endl;
  cout << "Top right point: "
  rt.printXY();
  cout << endl;
}