#include  <iostream>
#include <string>

using namespace std;

class Animal {
private: 
    string species;
    int age;
public:
    Animal( string species, int age):species(species),age(age) {}

    void displayDetails() {
        cout << "Species: " << species << ", Age: " << age << " years" << endl;
    }
};

int main()  {
    Animal animal1("Lion", 5);
    animal1.displayDetails();

    return 0;
}