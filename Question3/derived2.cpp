#include <iostream>
#include "derived2.h"
using namespace std;

Derived2::Derived2() {
    cout << "Derived2: Default constructor called." << endl;
}

Derived2::Derived2(int v1, int v2, int v3) : Derived1(v1, v2), d2Value{v3} {
    cout << "Derived2: Parameterized constructor called." << endl;
}

Derived2::Derived2(const Derived2& other) : Derived1(other), d2Value{other.d2Value} {
    cout << "Derived2: Copy constructor called." << endl;
}

Derived2& Derived2::operator=(const Derived2& other) {
    cout << "Derived2: Copy assignment operator called." << endl;
    if (this != &other) {
        Derived1::operator=(other);
        d2Value = other.d2Value;
    }
    return *this;
}

void Derived2::setValue(int v) {
    cout << "Derived2: setValue called." << endl;
    d2Value = v;
}

void Derived2::print() const {
    Derived1::print();
    cout << "Derived2: print() called. d2Value: " << d2Value << endl;
}

Derived2::~Derived2() {
    cout << "Derived2: Destructor called." << endl;
}