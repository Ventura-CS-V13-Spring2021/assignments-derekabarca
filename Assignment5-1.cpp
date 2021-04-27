#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;


int main() {
    
    //code that generates random numbers into an array
    const int N=10;
    double average;
    int sum = 0;
    
    int numbers[N];
    srand(time(0));
        
    for(int i=0; i<N; i++)
    {
        numbers[i] = rand() % 100;
    }
    //print out all elements in array
    for (int i=0; i<N;i++)
    {
        sum += numbers[i];
        cout << numbers[i] << "\t";
    }
    
    average = sum / 10.0;
    cout << endl;
    
    cout << "Sum of elements in array is: " << sum << endl;
    cout << "Average of elements in array is: " << average << endl;

}
