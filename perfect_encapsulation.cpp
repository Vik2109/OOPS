#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
  int id;
  int age;
  string name;
  int nos;

private:
  float *gpa;
  string gf;

public:
  void setGpa(float a)
  {
    *this->gpa = a;
  }

  float getGpa() const
  {
    return *this->gpa;
  }

  int getAge() const
  {
    return this->age;
  }

  string getName() const
  {
    return this->name;
  }

  int getId() const
  {
    return this->id;
  }

  int getNos() const
  {
    return this->nos;
  }

public:
  // contructor: Default constructor
  Student()
  {
    cout << "Student default constructor" << endl;
  }

  // Parameterised constructor
  Student(int id, int age, string name, int nos, float gpa, string gf)
  {
    cout << "Student parameterised ctor called" << endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
    this->gpa = new float(gpa);
    this->gf = gf;
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

private:
  void gfChatting()
  {
    cout << this->name << "Chatting with Girlfriend" << endl;
  };
};

int main()
{
  Student A(1, 12, "Vivek ", 5, 7.8, "Ranzer");
  // cout<<A.age<<endl;
  // // cout<<A.gf<<endl;
  cout<<A.getGpa()<<endl;
  A.setGpa(9.8);
  cout<<A.getGpa()<<endl;
  cout<<A.getAge()<<endl;
  cout<<A.getName()<<endl;

  return 0;
}