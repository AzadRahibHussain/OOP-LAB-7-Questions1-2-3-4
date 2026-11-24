#include <iostream>
#include "base.h"
using namespace std;

Base::Base() {
    cout << "Base: Default constructor called." << endl;
}

Base::Base(int v) : value{v} {
    cout << "Base: Parameterized constructor called." << endl;
}

Base::Base(const Base& other) : value{other.value} {
    cout << "Base: Copy constructor called." << endl;
}

Base& Base::operator=(const Base& other) {
    cout << "Base: Copy assignment operator called." << endl;
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

void Base::setValue(int v) {
    cout << "Base: setValue called." << endl;
    value = v;
}

void Base::print() const {
    cout << "Base: print() called. Value: " << value << endl;
}

Base::~Base() {
    cout << "Base: Destructor called." << endl;
}