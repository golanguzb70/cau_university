#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    // Virtual function for drawing
    virtual void draw() const {
        cout << "Drawing a generic shape\n";
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    // Override draw() for Circle
    void draw() const override {
        cout << "Drawing a circle\n";
    }
};

// Derived class Square
class Square : public Shape {
public:
    // Override draw() for Square
    void draw() const override {
        cout << "Drawing a square\n";
    }
};

int main() {
    // Create an array of Shape pointers
    const int arraySize = 3;
    Shape* shapes[arraySize];

    // Assign objects of different shapes to the array
    shapes[0] = new Shape();
    shapes[1] = new Circle();
    shapes[2] = new Square();

    // Demonstrate the use of virtual functions and pointers
    for (int i = 0; i < arraySize; ++i) {
        cout << "Calling draw() for shape " << i + 1 << ": ";
        shapes[i]->draw();
    }

    // Clean up: delete dynamically allocated objects
    for (int i = 0; i < arraySize; ++i) {
        delete shapes[i];
    }

    return 0;
}
