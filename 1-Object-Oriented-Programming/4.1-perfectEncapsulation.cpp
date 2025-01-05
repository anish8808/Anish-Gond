

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Student
{
    // all the attributes are here private
private:
    // Attributes ---> state or Property
    int id;
    int age;
    string name;
    int nos;
    float *gpa; // why need of distructor
    string gf;

public:
    // Constructor ---> initialize the object--->ctor
    Student()
    {
        cout << "Student Defaul t ctor called " << endl;
    }

    Student(int id, int age, string name, int nos, float gpa, string gf)
    {
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gf = gf;

        // for this gpa when default dtor will call will not free this memory we have to additionally delete this extra memory
        this->gpa = new float(gpa);
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

    void seGpa(float gpa)
    {
        // layer for authentication we can add
        *this->gpa = gpa;
    }

    float getGpa()
    {
        return *this->gpa;
    }

    int getAge()
    {
        return this->age;
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

    Student A(1, 12, "Anish", 7, 9.1, "BUtu");
    cout << A.getGpa() << endl;
    A.seGpa(6.7);

    cout << A.getGpa() << endl;
    return 0;
}