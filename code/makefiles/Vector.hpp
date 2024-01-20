#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        int x;
        Vector();
        Vector(int x);
        int operator-(Vector vec1);
};

#endif