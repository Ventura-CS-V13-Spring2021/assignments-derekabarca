#include <iostream>
using namespace std;

void sort(int arr[], int length);

int main(){

  int arr[] = {-20, 2, 5, -4, -19, 14, 21, 9, 6, -8, -12};
  int count = 1;
    int arrSize = sizeof(arr)/sizeof(arr[0]);

  cout << "N " << " Count" << endl;
  for(int i=0; i<arrSize; i++)
  {
    if(arr[i] == arr[i+1])
    count++;
    else
    {
      count = 1;
    }
    cout << arr[i] << "   " << count << endl;
  }


}

void sort(int arr[], int length)
{
  for (int i=length-1; i>0; i--)
      for (int j=0; j<i; j++)
        if (arr[j] < arr[j+1])
        {
          int val = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = val;
        }
}
