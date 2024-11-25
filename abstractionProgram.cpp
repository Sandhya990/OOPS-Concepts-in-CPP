// Abstraction means hiding the complex implementation details and showing only the necessary features of the object. 
// It is typically achieved through abstract classes or interfaces.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (abstract method)
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* shape;  // Pointer to Shape class

    Circle circle;  // Circle object
    Rectangle rectangle;  // Rectangle object

    // Points to different derived classes
    shape = &circle;
    shape->draw();  // Calls Circle's draw method

    shape = &rectangle;
    shape->draw();  // Calls Rectangle's draw method

    return 0;
}
