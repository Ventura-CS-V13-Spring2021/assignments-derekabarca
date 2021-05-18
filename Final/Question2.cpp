#include <iostream> 
using namespace std; 

void sort(int arr[], int length); 

int main(){

  int arr[] = {-10, 10, 1, 2, 5, -13, 12, 15, -6, 10, 2, 5};
  int count = 1;

  cout << "N " << " Count" << endl;
  for(int i=0; i<length; i++)
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