#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    float gpa;
public:
    Student(string name, int age,float gpa):name(name), age(age), gpa(gpa) {}
    Student(): Student("None", 0, 0) {}
    ~Student() {}

    void display() {
        cout << "-----------------------------------" << endl;
        cout << "| Name: " << name << endl;
        cout << "| Age: " << age << endl;
        cout << "| GPA: " << gpa << endl;
        cout << "-----------------------------------" << endl;
    } 
};




int main() {
    Student rect1("Azizbek", 18, 2.8);
    rect1.display();

    Student rect2;
    rect2.display();

    return 0;
}