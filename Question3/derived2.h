#ifndef DERIVED2_H
#define DERIVED2_H
#include "derived1.h"

class Derived2 : public Derived1 {
    private:
        int d2Value{};
    public:
        Derived2();
        Derived2(int v1, int v2, int v3);
        Derived2(const Derived2& other);
        Derived2& operator=(const Derived2& other);
        void setValue(int v);
        void print() const;
        ~Derived2();
};

#endif