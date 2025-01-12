#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string name;
    string model;
    int noOfTyres;

public:
    string getName()
    {
        return this->name;
    }

    Vehicle(string _name, string _model, int _noOfTyres)
    {
        cout << "I am inside vihcel Ctor" << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

    void start_engine()
    {
        cout << "Engine is starting" << name << " " << model << endl;
    }

    void stop_engine()
    {
        cout << "Engine is stopping " << name << " " << model << endl;
    }

    ~Vehicle()
    {
        cout << "I am inside Vichle Dtor" << endl;
    }
};

class Car : public Vehicle
{
protected:
    int noOfDoors;
    string transmissionType;

public:
    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres)
    {
        cout << "I am inside CAR Ctor" << endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType;
    }
    void startAC()
    {
        cout << "AC has started of " << name << endl;
    }

    ~Car()
    {
        cout << "I am inside CAR dtor" << endl;
    }
};

class MotorCycle : public Vehicle
{
protected:
    string handelBarStyle;
    string suspensionType;

public:
    MotorCycle(string _name, string _model, int _noOfTyres, string _handelBarStyle, string _suspensionType) : Vehicle(_name, _model, _noOfTyres)
    {
        cout << "I am inside MOTOR cyle Ctor" << endl;
        this->handelBarStyle = _handelBarStyle;
        this->suspensionType = _suspensionType;
    }

    void Weehlie()
    {
        cout << "wheelie kar rahi hai bike" << name << endl;
    }

    ~MotorCycle()
    {
        cout << "I am inside motor cycle dtor" << endl;
    }
};

int main()
{

    Car A{"Maruti 800 ", "LXI", 4, 4, "Manual"};
    A.start_engine();
    A.startAC();
    A.stop_engine();

    MotorCycle M("BMW", "VXI", 2, "U", "engine");
    M.start_engine();
    M.Weehlie();
    M.stop_engine();
    return 0;
}