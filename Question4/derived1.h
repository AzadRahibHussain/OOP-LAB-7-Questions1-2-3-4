#ifndef DERIVED1_H
#define DERIVED1_H
#include "base.h"

class Derived1 : public Base {
    private:
        int d1Value{};
    public:
        Derived1();
        Derived1(int v1, int v2);
        Derived1(const Derived1& other);
        Derived1& operator=(const Derived1& other);
        void setValue(int v);
        void print() const;
        ~Derived1();
};

#endif