#include <iostream>

using namespace std;

// Base class
class Base {
public:
    // Virtual function for display
    virtual void display() const {
        cout << "Base class display()\n";
    }
};

// Derived class Derived1
class Derived1 : public Base {
public:
    // Override display() for Derived1
    void display() const override {
        cout << "Derived1 class display()\n";
    }
};

// Derived class Derived2
class Derived2 : public Base {
public:
    // Override display() for Derived2
    void display() const override {
        cout << "Derived2 class display()\n";
    }
};

int main() {
    // Create objects of each class
    Base baseObj;
    Derived1 derived1Obj;
    Derived2 derived2Obj;

    // Demonstrate function overriding by calling display() on each object
    cout << "Base Object Display: ";
    baseObj.display();

    cout << "Derived1 Object Display: ";
    derived1Obj.display();

    cout << "Derived2 Object Display: ";
    derived2Obj.display();

    return 0;
}
