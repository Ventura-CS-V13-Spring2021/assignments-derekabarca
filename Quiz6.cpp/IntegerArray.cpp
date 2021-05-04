#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "integerarray.hpp"
#include <algorithm>
using namespace std; 

int IntegerArray::getLength(void) const
{
  return length;
}

void IntegerArray::fillUp(void)
{
  int i;
  for(int i=0; i<N; i++)
  {
    srand(time(0));
    numbers[i] = rand % 100;
    length = N;
  }
}

void IntegerArray::printAll(void) const
{
  for(int i=0; i<length; i++)
  {
    cout << numbers[i] << "\t";
    cout << endl;
  }
}

void IntegerArray::sortArray(int flag)
{
  if(flag==0)
  {
    sort(numbers, numbers + length)
  }
  if(flag != 0)
  {
    sort(numbers, numbers + length, greater<int>())
  }
}

void IntegerArray::getPrimenumber(void) const
{
  int prime, j;
  prime=0;
  for(int i=0; i<length; i++)
  {
    for(j=2; j<=numbers[i]; j++)
    {
      if(number[i] % j ==0)
      break;
    }
    if(numbers[i] == j)
    prime++;
  }
  return prime;
}