#include <iostream>
#include "derived1.h"
using namespace std;

Derived1::Derived1() {
    cout << "Derived1: Default constructor called." << endl;
}

Derived1::~Derived1() {
    cout << "Derived1: Destructor called." << endl;
}