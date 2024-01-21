#include <iostream>
#include <memory>


class Person {
    public:
        Person() {
            std::cout << "Person was created" << std::endl;
        };

        ~Person() {
            std::cout << "Person was destroyed" << std::endl;
        };

        void sayHello() {
            std::cout << "Hello there!" << std::endl;
        };
};


int main(int argc, char const *argv[]) {
    
    // Local scope between curly braces
    {
        // Smart pointers calls 'new' keyword for you, so not required
        // Creates a unique pointer to Person object
        // Unique pointers are a one-to-one relationship and grants exclusive ownership
        std::unique_ptr<Person> person_uniq_pointer = std::make_unique<Person>();

        person_uniq_pointer->sayHello();
    }

    std::cout << "Note unique person pointer was deleted automatically after exiting scope\n" << std::endl;

    {
        // Creates a shared pointer 
        std::shared_ptr<Person> person_shared_ptr1 = std::make_shared<Person>();

        // Another local scope (ptr1 is global to this scope)
        {
            // Creates another shared pointer 
            // Both pointers are now pointing at the Person object
            std::shared_ptr<Person> person_shared_ptr2 = person_shared_ptr1; 

            person_shared_ptr1->sayHello();
        }

        std::cout << "Exited local scope and ptr2 has been deleted, however pointer still exists for ptr1.\nThe shared pointer only gets deleted once all shared pointers have been deleted (exited scopes)" << std::endl;

        person_shared_ptr1->sayHello();
    }

    std::cout << "Exited scope in which both shared pointers existed and so the shared pointer was deleted" << std::endl;

    return 0;
}
