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

    // syntax
    // Ret_type operator <op> (args)

    Complex operator+(const Complex &B)
    {
        Complex temp;

        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

    Complex operator-(const Complex &B)
    {
        Complex temp;

        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }

    bool operator==(const Complex &B)
    {
        bool ansReal = this->real == B.real;
        bool ansimag = this->imag == B.imag;
        return ansReal && ansimag;
    }

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

    Complex C = A + B; // here Operator Overloading use hoga as + dont know kaise complex number ko add kaise karna h toh + se ye exta kaam karna hain mant forms hain
    C.print();

    Complex D = A - B;
    D.print();

    bool ans = A == B;
    cout << ans << endl;
    return 0;
}
