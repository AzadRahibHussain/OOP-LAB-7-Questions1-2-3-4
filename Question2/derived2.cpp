#include <iostream>
#include "derived2.h"
using namespace std;

Derived2::Derived2() {
    cout << "Derived2: Default constructor called." << endl;
}

Derived2::Derived2(int v1, int v2, int v3) : Derived1(v1, v2), d2Value{v3} {
    cout << "Derived2: Parameterized constructor called." << endl;
}

void Derived2::print() const {
    Derived1::print();
    cout << "Derived2: print() called. d2Value: " << d2Value << endl;
}

Derived2::~Derived2() {
    cout << "Derived2: Destructor called." << endl;
}