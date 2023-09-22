#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Solution {
public:
    int findComplement(int num) {
        string bin;
        int result = 0;
        while(num != 0) {
            if (num % 2 == 0) {
                bin += "1";
            } else {
                bin += "0";
            }
            num /= 2;
        }
        int len = bin.length();
        for (int i = len - 1; i >= 0; i--) {
            if (bin[i] == '1') {
                result += pow(2, i);
            }
        }
        
        return result;
    }
};

int main() {
    string s;
    Solution solution;
    solution.findComplement(5);    
    return 0;
}