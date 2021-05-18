#include <iostream> 
#include <string> 

using namespace std;

int getNumDiv(int x[], int elms);

int main(){

  int greatestNum;
  int arr[6] = {1, 2, 4, 6, 10, 24};

  greatestNum = getNumDiv(arr, 6);
  cout << "Greatest number of divisible elements is: " << greatestNum << ": " << arr[greatestNum] << endl;
  
  return 0;

}

int getNumDiv(int x[], int elms)
{
  int 
}