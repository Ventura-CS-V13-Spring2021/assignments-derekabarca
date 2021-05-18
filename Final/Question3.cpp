#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

class Student
{
public: Student();
        ~Student();
        void input();
        void output();
        void reset();
        Student& operator =(const Student& rhs);
  
private:
    string name;
    int num_classes;
    string *class_list;
};
  
Student::Student() : name(""), num_classes(0), class_list(NULL)
{
}
  
Student::~Student()
{
    num_classes = 0;
    reset();
    name = "";
}
  
void Student::reset()
{
    if (class_list) {
        delete[] class_list;
        class_list = NULL;
        num_classes = 0;
    }
}
  
void Student::input()
{
    reset();
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter number of classes: ";
    cin >> num_classes;
    cin.ignore(2, '\n');
    if (num_classes > 0) {
        class_list = new string[num_classes];
        for (int i = 0; i<num_classes; i++) {
            cout << "Enter name of class " << (i + 1) << " : ";
            getline(cin, class_list[i]);
        }
    }
    cout << endl;
}
  
void Student::output()
{
    cout << "Class List: " << endl;
    for (int i = 0; i < num_classes; i++) {
        cout << setw(2) << right << i + 1 << ") " << class_list[i] << endl;
    }
}
  
Student& Student::operator =(const Student& rhs)
{
    reset();
    num_classes = rhs.num_classes;
    if (num_classes > 0) {
        class_list = new string[num_classes];
        for (int i = 0; i < num_classes; i++) {
            class_list[i] = rhs.class_list[i];
        }
    }
  
    return *this;
}
  
int main()
{
  
    Student s1, s2;
    s1.input();
    cout << "Student 1's data:" << endl;
    s1.output();
    cout << endl;
    s2 = s1;
    cout << "Student 2's data after assignment from student 1:" << endl;
    s2.output();
    s1.reset();
    cout << endl;
    cout << "Student 1's data after reset:" << endl;
    s1.output();
    cout << endl;
    cout << "Student 2's data, should still have original classes:" << endl;
    s2.output();
    cout << endl;
    
    return 0;
}
