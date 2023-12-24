#include  <iostream>

using namespace std;

class Shape {
public:
    void draw() {
        cout << "base class draw\n"; 
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}

    void draw() {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {}
    
    void draw() {
        cout << "Drawing Rectangle with length and width: " << length << " and " << width << endl;
    }
};

void renderShape(Shape *shape) {
    shape->draw();
}

void renderShape(Circle *shape) {
    shape->draw();
}

void renderShape(Rectangle *shape) {
    shape->draw();
}

int main()  {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 3.0);
    renderShape(&circle);
    renderShape(&rectangle);

    return 0;
}