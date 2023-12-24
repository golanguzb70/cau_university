#include  <iostream>

using namespace std;


int main()  {
    int number = 5;
    int *pointer = &number;
    *pointer = 10;
    cout << "number = " << number << endl;
    return 0;
}