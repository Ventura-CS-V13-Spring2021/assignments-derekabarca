#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//make functions
void makearray(int n[], int);
void printarray (int n[], int);
void findMinMax (int n[], int);

int main()
{
    const int N = 10;
    int numbers[N];
    srand(time(0));
    makearray(numbers, N);
    printarray(numbers, N);
    findMinMax(numbers, N);
    
}

void makearray(int n[], int N)
{
    for(int i=0; i<N; i++)
    {
        n[i] = rand() % 100;
    }
}
void printarray(int n[], int N)
{
    for(int i=0; i<N; i++)
    {
        cout << n[i] << "\t";
        cout << endl;
    }
}
void findMinMax(int n[], int N)
{
    int min, mix;
    for(int i=0; i<N; i++)
    {
        if(i==0)
        {
            min = n[i] && max = n[i];
        }
            else
        {
            if(min > n[i]) min = n[i];
            if(max < n[i]) max = n[i];
        }
    }
    cout << "Min value is: " << min << endl;
    cout << "Min value is: " <<min << endl;
}

