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
        cout << "Drawing a 
