// Abstraction hides unnecessary details from a client, and show case only what is necessary

#include<iostream>
#include <string>

using namespace std;

class Car{
  public:
  virtual void startEngine();
  virtual void shiftGear();
  virtual void accelerate();
  virtual void brake();
  virtual void stopEngine();

  virtual ~Car() {}
};

class SportCar : public Car{
  public:
  string brand;
  string model;
  bool isEngineOn;
  int currentSpeed;
  int currentGear;

  SportCar(string b, string m) {
    this -> brand = b;
    this -> model = m;
    isEngineOn = false;
    currentSpeed = 0;
    currentGear = 0;
  }

  void startEngine() {
    isEngineOn = true;
    cout<< brand << " " << model << " :Engine start with a roar!"<<endl;
  }

  void shiftGear(int gear){
    if(!isEngineOn){
      
    }
  }

};