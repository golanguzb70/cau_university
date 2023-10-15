#include <iostream>


using namespace std;


int main() {
    int days;
    
    cin >> days;

    cout << (days / 365) << endl;

    days = days % 365;

    cout << (days / 30) << endl;

    cout << (days % 30) << endl;
    
    return 0;
}