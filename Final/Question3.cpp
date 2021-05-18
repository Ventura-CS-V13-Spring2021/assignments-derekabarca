#include <iostream> 
#include <string>
using namespace std;

class Student 
{
  public:
  Student();
  Student(int num, string name);
  Student(Student &rhs);


  private:
  string name; 
  int num_classes; 
  string* class_list;  

};

Student::Student() : name(), num_classes(0)
{
  classList = new string[num_classes]; 
}

Student::Student(string n, int num) : name(n), num_classes(num)
{
  classList = new string[num_classes];
   for (int i = 0; i < num_classes; i++)
   {
       cout << "Enter class name : ";
       cin >> classList[i];
   }
}

Student::Student(const Student& rhs)
{
  name = rhs.name; 
  num_classes = rhs.num_classes; 
  classList = new string[num_classes]; 
  for (int i=0; i<num_classes; i++)
    classList[i] = rhs.classList[i]; 
} 


int main(){



}