#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex()
    {
        real = imag = -1;
    }

    Complex(int r, int i) : real(r), imag(i) {};
    void print()
    {
        printf("[%d + i%d]", this->real, this->imag);
        cout << endl;
    }
};

int main()
{
    Complex A(2, 5);
    A.print();
    Complex B(2, 3);
    B.print();

    return 0;
}
