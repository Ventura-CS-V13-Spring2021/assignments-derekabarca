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
  if(current > max
  {
    max = current;
  }
}
return 0;
}

