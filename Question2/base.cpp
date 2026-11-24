#include <iostream>
#include "base.h"
using namespace std;

Base::Base() {
    cout << "Base: Default constructor called." << endl;
}

Base::Base(int v) : value{v} {
    cout << "Base: Parameterized constructor called." << endl;
}

void Base::print() const {
    cout << "Base: print() called. Value: " << value << endl;
}

Base::~Base() {
    cout << "Base: Destructor called." << endl;
}