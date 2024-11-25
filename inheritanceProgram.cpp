// Inheritance allows one class to inherit properties and behaviors (methods) from another class. It promotes code reusability.

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {  // Dog inherits from Animal
public:
    void speak() {  // Overriding speak method
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal animal;
    animal.speak();  // Calls Animal's speak method

    Dog dog;
    dog.speak();  // Calls Dog's overridden speak method

    return 0;
}
