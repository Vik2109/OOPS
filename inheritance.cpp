#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
  string name;
  string model;
  int noOfTyres;

  Vehicle(string _name, string _model, int _noOfTyres)
  {
    cout << "I am inside vehicle ctor" << endl;
    this->name = _name;
    this->model = _model;
    this->noOfTyres = _noOfTyres;
  }

  void startEngine()
  {
    cout << "Engine is starting " << name << " " << model << endl;
  }
  void stopEngine()
  {
    cout << "Engine is stopped " << name << " " << model << endl;
  }
};

class Car : public Vehicle
{
public:
  int noOfDoors;
  string transmissionType;

  Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres)
  {
    cout << "I am inside Car ctor" << endl;
    this->noOfDoors = _noOfDoors;
    this->transmissionType = _transmissionType;
  }

  void startAc()
  {
    cout << "AC has started of " << name << endl;
  }
};

int main()
{
  Car A("Toyota Vellfire", "Vellfire", 4, 4, "Automatic");
  cout << A.name << endl;
  cout << A.model << endl;
  cout << A.noOfTyres << endl;
  cout << A.noOfDoors << endl;
  cout << A.transmissionType << endl;
  return 0;
}