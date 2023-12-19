#include <iostream>


using namespace std;

void swap(int* a, int* b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    int *aP = &a, *bP = &b;
    
    cin >> *aP >> *bP;

    swap(aP, bP);

    cout << *aP << " " <<  *bP << endl;

    return 0;
}