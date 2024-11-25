"# OOPS-Concepts-in-CPP" 
"# Here's a single C++ program that covers all four key Object-Oriented Programming (OOP) concepts: Encapsulation, Abstraction, Inheritance, and Polymorphism."

"# **Encapsulation**:
In the Rectangle and Circle classes, the properties such as length, width, and radius are private. The values of these properties can only be accessed or modified via public getter and setter methods, ensuring the data is protected and only exposed when needed.

**Abstraction**:
The Shape class is an abstract class with a pure virtual function draw(). This function is overridden in both the Rectangle and Circle classes. The abstraction hides the implementation details of the drawing process, allowing only the necessary functionality (i.e., the ability to draw a shape) to be exposed.

**Inheritance**:
The Rectangle and Circle classes inherit from the Shape class. This demonstrates the concept of inheritance, where derived classes (Rectangle and Circle) inherit the properties and behaviors of the base class (Shape).

**Polymorphism**:
Polymorphism is demonstrated by using the same function name draw() in the base class (Shape) and overriding it in the derived classes (Rectangle and Circle). At runtime, the correct draw() method is called based on the type of object (Rectangle or Circle), which is the essence of runtime polymorphism. This is achieved by using virtual functions and overriding them in the derived classes."

