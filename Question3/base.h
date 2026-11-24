#ifndef BASE_H
#define BASE_H

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
        ~Base();
};

#endif
