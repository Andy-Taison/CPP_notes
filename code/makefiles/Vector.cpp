#include "Vector.hpp"

Vector::Vector() {
    x = 0;
}

Vector::Vector(int x) {
    this->x = x;
}

int Vector::operator-(Vector vec1) {
    return this->x * vec1.x;
}