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
	int *gpa; // why need of distructor

	// Constructor ---> initialize the object--->ctor
	Student()
	{
		cout << "Student Defaul t ctor called " << endl;
	}

	Student(int id, int age, string name, int nos, int gpa)
	{
		this->id = id;
		this->age = age;
		this->name = name;
		this->nos = nos;

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
};

int main()
{
	// Student A;
	// A.id = 1;
	// A.age = 15
	// A.name = "Anish";
	// A.nos = 6;
	// A.study();

	// Student B;
	// B.id = 2;
	// B.age = 12;
	// B.name = "rahul";
	// B.nos = 3;
	// B.bunk();

	Student A(1, 14, "Anish", 6, 9);
	// Student B(2, 14, "manish", 5);
	// Student C(3, 14, "nish", 4);
	// Student D(4, 14, "ish", 3);

	// cout << A.name << endl;
	// cout << A.age << endl;

	// copy constructor

	Student C = A;

	// Dyanamic Allocation  in heap memory
	Student *D = new Student(2, 17, "Manish", 8, 10);
	cout << D->age << endl;

	delete D;
	return 0;
}