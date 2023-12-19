#include <iostream>
#include <string>

using namespace std;


class Person
{
private:
    string name;
    int age;
    float height;
public:
    Person(string name, int age, float height):name(name),age(age),height(height) {}
    ~Person() {
        cout << name << " is destructed!\n";
    };

    void setName(string name) { name = name; }
    void setAge(int age) { age=age; }     
    void setHeight(float height) { height=height;}
    
    string getName() { 
        return name;
    }
    int getAge() {
        return age;
    }
    float getHeight() {
        return height;
    }

    float calculateBMI(int weight) {
        return weight / (height * height);
    }
};



int main() {

    return 0;
}