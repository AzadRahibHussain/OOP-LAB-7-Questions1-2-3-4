#include <iostream>
#include "derived1.h"
using namespace std;

Derived1::Derived1() {
    cout << "Derived1: Default constructor called." << endl;
}

Derived1::Derived1(int v1, int v2) : Base(v1), d1Value{v2} {
    cout << "Derived1: Parameterized constructor called." << endl;
}

Derived1::Derived1(const Derived1& other) : Base(other), d1Value{other.d1Value} {
    cout << "Derived1: Copy constructor called." << endl;
}

Derived1& Derived1::operator=(const Derived1& other) {
    cout << "Derived1: Copy assignment operator called." << endl;
    if (this != &other) {
        Base::operator=(other);
        d1Value = other.d1Value;
    }
    return *this;
}

void Derived1::setValue(int v) {
    cout << "Derived1: setValue called." << endl;
    d1Value = v;
}

void Derived1::print() const {
    Base::print();
    cout << "Derived1: print() called. d1Value: " << d1Value << endl;
}

Derived1::~Derived1() {
    cout << "Derived1: Destructor called." << endl;
}