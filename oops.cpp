#include <iostream>
#include <string>
using namespace std;

// Abstraction: Abstract class
class Shape {
public:
    // Pure virtual function (abstract method)
    virtual void draw() = 0;
    
    // Virtual destructor
    virtual ~Shape() {}
};

// Encapsulation: Rectangle class with private data members
class Rectangle : public Shape {
private:
    double length;
    double width;
    
public:
    // Constructor to initialize the rectangle's dimensions
    Rectangle(double l, double w) : length(l), width(w) {}

    // Public method to set the dimensions of the rectangle
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Getter method to retrieve the dimensions
    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    // Overriding the draw() method (Polymorphism)
    void draw() override {
        cout << "Drawing Rectangle with Length: " << length << " and Width: " << width << endl;
    }
};

// Inheritance: Circle class derived from Shape class
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize the circle's radius
    Circle(double r) : radius(r) {}

    // Public method to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Getter method to retrieve the radius
    double getRadius() {
        return radius;
    }

    // Overriding the draw() method (Polymorphism)
    void draw() override {
        cout << "Drawing Circle with Radius: " << radius << endl;
    }
};

// Main function demonstrating OOP principles
int main() {
    // Abstraction: Using pointers to Shape class to call draw()
    Shape* shape1;
    
    // Encapsulation and Inheritance: Create a Rectangle object
    Rectangle rectangle(10.0, 5.0);
    shape1 = &rectangle;
    shape1->draw();  // Calls Rectangle's draw method

    // Encapsulation and Inheritance: Create a Circle object
    Circle circle(7.0);
    shape1 = &circle;
    shape1->draw();  // Calls Circle's draw method

    // Demonstrating the use of encapsulation with getter and setter methods
    rectangle.setDimensions(15.0, 8.0);  // Modifying rectangle's dimensions
    cout << "Updated Rectangle dimensions -> Length: " << rectangle.getLength() << ", Width: " << rectangle.getWidth() << endl;

    // Demonstrating polymorphism: same method name (draw) behaves differently
    shape1 = &rectangle;
    shape1->draw();  // Calls Rectangle's draw method

    shape1 = &circle;
    shape1->draw();  // Calls Circle's draw method

    return 0;
}
