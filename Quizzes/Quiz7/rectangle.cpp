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
Rectangle::Coordinate getLB() const
{
  return lb;
}
Rectangle::Coordinate getRT() const
{
  return rt;
}