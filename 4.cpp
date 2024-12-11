#include <iostream>
using namespace std;

// Abstract class with pure virtual function
class Shape {
public:
    // Pure virtual function (makes the class abstract)
    virtual void draw() = 0;  // No implementation in the base class

    // Regular function
    void move() {
        cout << "Shape is moving." << endl;
    }

    // Virtual destructor
    virtual ~Shape() {
        cout << "Shape destroyed." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    // Providing implementation for pure virtual function
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class: Square
class Square : public Shape {
public:
    // Providing implementation for pure virtual function
    void draw() override {
        cout << "Drawing a Square." << endl;
    }
};

int main() {
    // Cannot create an instance of Shape, since it is abstract
    // Shape s;  // Error: Cannot instantiate abstract class

    // Create objects of derived classes
    Shape* circle = new Circle();
    Shape* square = new Square();

    // Calling overridden methods in derived classes
    circle->draw();  // Calls Circle's draw()
    square->draw();  // Calls Square's draw()

    // Calling a method defined in the abstract class
    circle->move();  // Calls Shape's move()

    // Cleanup
    delete circle;
    delete square;

    return 0;
}
