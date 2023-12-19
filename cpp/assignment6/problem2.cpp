#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    // Virtual method for making sound
    virtual void makeSound() const {
        cout << "Some generic animal sound\n";
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override makeSound() for Dog
    void makeSound() const override {
        cout << "Woof! Woof!\n";
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override makeSound() for Cat
    void makeSound() const override {
        cout << "Meow! Meow!\n";
    }
};

int main() {
    // Create objects of each class
    Animal genericAnimal;
    Dog myDog;
    Cat myCat;

    // Demonstrate hierarchical inheritance by calling makeSound() on each object
    cout << "Generic Animal Sound: ";
    genericAnimal.makeSound();

    cout << "Dog Sound: ";
    myDog.makeSound();

    cout << "Cat Sound: ";
    myCat.makeSound();

    return 0;
}
