#include <bits/stdc++.h>
#include <iostream>

// virctual keyword we will use to achive run time polymorphism
/**
 * CONCEPT
    * complie time ploymorphims also called early binding means compiler will run the program line by line and bind the
      corresponding data and func of that paritcular object at that time only

    * Run time polymorphism also called late biniding and usese virtual keyword that tell complier to take the deciion
    or method binding at run time if it is associated with virtual key ,

    * we can store the chind class address using base class pointer and if we will use that and call the childclass method using
    the base class pointer then (without virtual it will call the base one ) bt with virtaul it will call the child one
 */

using namespace std;

class Shapes
{
public:
    virtual void draw()
    {
        cout << "Generic Drwaing " << endl;
    }
};

class Circle : public Shapes
{
public:
    void draw() override
    {
        cout << "Draw for circle" << endl;
    }
};

class Rect : public Shapes
{
public:
    void draw() override
    {
        cout << "Draw for Rectangle" << endl;
    }
};

void ShapeDrawing(Shapes *s)
{
    s->draw(); // this is polymorphis (as comiple time and run time it behaves differently)
}

int main()
{
    Circle c;
    Rect r;
    c.draw(); // this will call the the circle call draw as a child draw
    r.draw();
    // ***** IMP ****  Shapes *s = &c; // this is called upcasting (means parent class ka pointer can hold the child class address as well)
    ShapeDrawing(&c);
    //
    ShapeDrawing(&r);

    return 0;
}