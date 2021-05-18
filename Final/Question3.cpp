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
    Reset();
    name = " ";
}
void Student::Reset()
{
    if (class_list) {
        delete[] class_list;
        class_list = NULL;
        num_classes = 0;
    }
}
void Student::InputData()
{
    Reset();
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter number of classes: ";
    cin >> num_classes;
    cin.ignore(2, '\n');
    if (num_classes > 0) {
        class_list = new string[num_classes];
        for (int i=0; i<num_classes; i++) {
            cout << "Enter name of class " << (i + 1) << " : ";
            getline(cin, class_list[i]);
        }
    }
    cout << endl;
}
void Student::OutputData()
{
    cout << "Class List: " << endl;
    for (int i=0; i<num_classes; i++) {
        cout << setw(2) << right << i + 1 << ") " << class_list[i] << endl;
    }
}


int main(){



}