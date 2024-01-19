/*
Demonstrates that friends are not inherited
*/

#include <iostream>

class C; // Forward declaration (as class B takes parameter C which is defined later and causes compilation error)

// Class A has friend B
class A {
    private:
        int x;
        friend class B;
    public:
        void set_value(int i) {
            x = i;
        }
};

// Class B can access A's private members as is friend
class B {
    public:
        void accessA(const A& a) {
            // B can access private members of A
            std::cout << a.x << std::endl;  // Allowed
        }
        void accessC(const C& c) {

            // Error if uncommented  as B is not a friend of C
            // std::cout << c.y << std::endl;
        }
};

// Class C inherites members, but not friendship of A
class C : public A {
    int y;
    public:
        void set_value(int i) {
            y = i;
        }
};

int main() {
    A a;
    B b;
    C c;

    a.set_value(10);
    c.set_value(20);

    b.accessA(a);  // Allowed, B is a friend of A
    b.accessC(c); // Compilation error, B is not a friend of C

    return 0;
}
