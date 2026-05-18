#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
  // attributes
  int id;
  int age;
  string name;
  int nos;

  // contructor: Default constructor
  Student()
  {
    cout << "Student default constructor" << endl;
  }

  // Parameterised constructor
  Student(int id, int age, string name, int nos)
  {
    cout << "Student parameterised ctor called" << endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
  }

  // Copy constructor
  Student(const Student &srcobj)
  {
    cout << "Student copy ctor called" << endl;
    this->id = srcobj.id;
    this->age = srcobj.age;
    this->name = srcobj.name;
    this->nos = srcobj.nos;
  }

  // Behaviour / methods / functions
  void study()
  {
    cout << this->name << "Studing" << endl;
  };
  void sleep()
  {
    cout << this->name << "Sleeping" << endl;
  };

  void bunk()
  {
    cout << this->name << "Bunking" << endl;
  };

  // Destructor
  ~Student()
  {
    cout << this->name << "Student default destructor" << endl;
  }
};

int main()
{
  // Student A;
  // A.id = 1;
  // A.name = "Vinay ";
  // A.age = 15;
  // A.nos = 6;
  // A.study();

  // Student B;
  // B.id = 2;
  // B.name = "Vivek ";
  // B.age = 15;
  // B.nos = 6;
  // B.bunk();

  // Student A(1, 15, "Max ", 6);
  // Student B(2, 14, "Jack ", 4);
  // Student C(3, 17, "Smith ", 5);
  // Student D(4, 24, "John ", 6);

  // cout<<A.name<<" "<<B.age<<endl; //Stack memory allocation
  // cout<<B.name<<" "<<B.age<<endl;

  // A.bunk();
  // B.sleep();

  // // Student C = A;
  // Student C(A);
  // cout<<C.name<< " "<<A.name<<endl;

  // Dynamic Memory allocation or student pointer
  Student *ptrA = new Student(1, 14, "Babbar ", 7);
  cout << ptrA->name << endl;
  ptrA->study();
  delete ptrA;

  return 0;
}