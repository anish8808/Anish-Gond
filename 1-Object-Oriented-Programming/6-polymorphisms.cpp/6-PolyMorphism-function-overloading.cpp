#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Add
{
public:
    int sum(int x, int y)
    {
        return x + y;
    }

    // for 3 sum integer
    int sum(int x, int y, int z)
    {
        return x + y + z;
    }

    // double addition

    double sum(double x, double y)
    {
        return x + y;
    }
};

int main()
{
    Add a1;

    // here you will see function overloading (static type polymorphsm)
    //  polymorphism is one to many form sum is one func that is behaving many form for object created by Add class
    int sum1 = a1.sum(1, 2);
    int sum2 = a1.sum(1, 2, 3);
    double sum3 = a1.sum(1.1, 2.2);
    cout << sum1 << " " << sum2 << " " << sum3 << endl;
    return 0;
}