#include <iostream>
#include <string>

using namespace std;

int getNumDiv(int arr[], int i, int len);
int main(){

int arr[] = {1, 2, 4, 6, 10, 24};
int max = 0;
for(int i=0; i<6; i++)
{
  int current = getNumDiv(arr, arr[i], 6);
  if(current > max)
  {
    max = current;
  }
}
cout << endl << "Element 6 has the greatest number of factors, which is " << max << endl;
return 0;
}
int getNumDiv(int arr[], int i, int length)
{
  int count = 0;
cout << endl << "# of factors for " << i << ": ";
for(int d = 1; d < i; d++)
{
    if(i % d == 0)
{
for(int c = 0; c < length; c++)
{
    if(d == arr[c])
{
count++;
cout << arr[c] << ", ";
}
}
}
}
return count;
}

