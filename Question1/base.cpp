#include <iostream>
#include "base.h"
using namespace std;

Base::Base() {
    cout << "Base: Default constructor called." << endl;
}

Base::~Base() {
    cout << "Base: Destructor called." << endl;
}