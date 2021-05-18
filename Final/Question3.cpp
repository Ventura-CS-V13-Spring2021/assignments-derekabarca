#include <iostream> 
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Student
{
public: Student();
        ~Student();
        void InputData();
        void OutputData();
        void Reset();
        Student& operator =(const Student& rightSide);
  
private:
    string name;
    int num_classes;
    string *class_list;
};



int main(){



}