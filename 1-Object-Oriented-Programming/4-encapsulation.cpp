

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Student
{
public:
    // Attributes ---> state or Property
    int id;
    int age;
    string name;
    int nos;

private:
    int *gpa; // why need of distructor
    string gf;

public:
    // Constructor ---> initialize the object--->ctor
    Student()
    {
        cout << "Student Defaul t ctor called " << endl;
    }

    Student(int id, int age, string name, int nos, int gpa, string gf)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gf = gf;

        // for this gpa when default dtor will call will not free this memory we have to additionally delete this extra memory
        this->gpa = new int(gpa);
        cout << "paramterised constructor" << endl;
    }
    // copy constructor

    Student(const Student &srcobj)
    {
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
        cout << "Copy constructor" << endl;
    }

    // Behaviours ---> method or function
    void study()
    {
        cout << this->name << "Studying " << endl;
    }

    void sleep()
    {
        cout << this->name << "sleeping " << endl;
    }

    void bunk()
    {
        cout << this->name << "bunking" << endl;
    }
    // Destrcutors ---> dtor
    ~Student()
    {
        delete this->gpa;
        cout << this->name << "Student default dtor callled" << endl;
    }

private:
    void gfChatting()
    {
        cout << "Student is chating with gf" << endl;
    }
};

int main()
{

    Student A(1, 12, "Anish", 7, 9, "BUtu");
    cout << A.age << endl;
    // cout << A.gf << endl; //cannt acess as its private memebers ,
    A.sleep(); // main is only calling sleep but dont know the implementation

    return 0;
}