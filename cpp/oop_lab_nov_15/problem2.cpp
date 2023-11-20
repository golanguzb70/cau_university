#include <iostream>


using namespace std;

class Rectangle
{
private:
    float width;
    float height;
public:
    Rectangle(float width,float height):width(width), height(height) {}
    Rectangle(): Rectangle(0, 0) {}
    ~Rectangle() {
    }

    void showArea() {
        cout << "Area is " << width * height << endl;
    } 
};




int main() {
    Rectangle rect1(10.0, 10.0);
    rect1.showArea();

    Rectangle rect2;
    rect2.showArea();

    return 0;
}