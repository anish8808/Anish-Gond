#include <bits/stdc++.h>
#include <iostream>

// virctual keyword we will use to achive run time polymorphism
/**
 * CONCEPT
    * complie time ploymorphims also called early binding means compiler will run the program line by line ans bind the
      corresponding data and func of that paritcular object at that time only
 */

using namespace std;

class Shapes
{
public:
    void draw()
    {
        cout << "Generic Drwaing " << endl;
    }
};

class Circle : public Shapes
{
public:
    void draw()
    {
        cout << "Draw for circle" << endl;
    }
};

class Rect : public Shapes
{
public:
    void draw()
    {
        cout << "Draw for Rectangle" << endl;
    }
};

void ShapeDrawing(Shapes *s)
{
    s->draw();
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