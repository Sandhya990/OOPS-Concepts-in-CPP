// Polymorphism allows one function to behave differently based on the object that it is acting upon. There are two types of polymorphism:
// Compile-time polymorphism (Function Overloading)
// Run-time polymorphism (Function Overriding)


#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) {
        cout << "Printing integer: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    Printer p;
    p.print(10);        // Calls print(int)
    p.print(3.14);      // Calls print(double)
    p.print("Hello");   // Calls print(string)

    return 0;
}
