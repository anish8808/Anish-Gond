#if !defined(BIRD_H) // this line is use for checking if you defined more then 1 in your programm this macros this will run and identify weather defined or not
#define BIRD_H
#include <iostream>

class Bird
{
public:
    /* This Class implementing the abstract class also callend an interface
        abstract class is class that have pure virtual function and if any of other class is inheriting this BIRD class
        then that class need to implenets the method eat() , fly() this is neccessary

    * Bird is an abstract class, any class that inherits it, such as Sparrow, must implement all its pure virtual functions.
    Otherwise, Sparrow will also be considered an abstract class, and you won't be able to instantiate it.*/

    virtual void eat() = 0; // this is also called an interface
    virtual void fly() = 0;
};

class Sparrow : public Bird
{
    void fly()
    {
        std::cout << "Sparrow is flying " << std::endl;
    }
    void eat()
    {
        std::cout << "Sparrow is eating " << std::endl;
    }
};

class Eagle : public Bird
{
    void fly()
    {
        std::cout << "Eagle is flying " << std::endl;
    }
    void eat()
    {
        std::cout << "Eagle is eating " << std::endl;
    }
};

class Pigeion : public Bird
{
    void fly()
    {
        std::cout << "Pigeion is flying " << std::endl;
    }
    void eat()
    {
        std::cout << "Pigeion is eating " << std::endl;
    }
};
#endif