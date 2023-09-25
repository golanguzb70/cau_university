#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> tobin(int in) {
    vector<int> result;
        for (int i = 0; i < 8; i++) {
        result.push_back('0');
    }
    int index = 7;
    while (in)
    {
        if (in % 2 == 1) {
            result[index] = '1';
        }
        index--;
        in /= 2;
    }

    for (int i = 0; i < 8; i++) {
        cout << result[i] << ", ";
    }
    cout << endl;

    return result;
}

vector<int> addnumers(vector<int> a, vector<int> b) {
    vector<int> result(8);
    int len = a.size();
    int memory = 0;
    for(int i = len - 1; i >= 0; i++) {
        result[i] = (a[i] + b[i] + memory) / 2;
        if (a[i] + b[i] >= 1) {
            if (a[i] + b[i] == 1) {
                memory = 1;
            }
        } else {
            memory = 0;
        }
    } 
}

int complement8Bits(int firstPositive, int negative) {
    vector<int> binPositive;
    vector<int> binNegative;

    binPositive = tobin(firstPositive);
    binNegative = tobin(negative);
    return 0;
}



int main() {
    complement8Bits(7, 21);
    return 0;
}