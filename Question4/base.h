#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;

class Base {
    private:
        int value{};
    public:
        Base();
        Base(int v);
        Base(const Base& other);
        Base& operator=(const Base& other);
        void setValue(int v);
        void print() const;
        friend ostream& operator<<(ostream& out, const Base& obj);
        ~Base();
};

#endif
