#include <iostream>
#include "derived1.h"
using namespace std;

Derived1::Derived1() {
    cout << "Derived1: Default constructor called." << endl;
}

Derived1::Derived1(int v1, int v2) : Base(v1), d1Value{v2} {
    cout << "Derived1: Parameterized constructor called." << endl;
}

void Derived1::print() const {
    Base::print();
    cout << "Derived1: print() called. d1Value: " << d1Value << endl;
}

Derived1::~Derived1() {
    cout << "Derived1: Destructor called." << endl;
}