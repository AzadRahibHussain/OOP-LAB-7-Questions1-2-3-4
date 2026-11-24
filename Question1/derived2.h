#ifndef DERIVED2_H
#define DERIVED2_H
#include "derived1.h"

class Derived2 : public Derived1 {
    private:
        int d2Value{};
    public:
        Derived2();
        ~Derived2();
};

#endif