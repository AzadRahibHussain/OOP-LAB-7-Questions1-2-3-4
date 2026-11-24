#include <iostream>
#include "derived2.h"
using namespace std;

Derived2::Derived2() {
    cout << "Derived2: Default constructor called." << endl;
}

Derived2::~Derived2() {
    cout << "Derived2: Destructor called." << endl;
}