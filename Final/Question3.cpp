#include <iostream> 
#include <string>
using namespace std;

class Student 
{
  public:
  Student();
  Student(int num, string name);
  Student(Student &rhs);
  //really stuck, don't know what to do 



  private:
  string name; 
  int num_classes; 
  string* class_list;  

};


int main(){



}