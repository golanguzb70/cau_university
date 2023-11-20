#include <iostream>

using namespace std;

class String
{
private:
    char *characters;

public:
    String(const char *chars) {
        int len = 0;
        while (chars[len] != '\0') {
            len++;
        }

        characters = new char[len + 1];
        for (int i = 0; i <= len; i++) {
            characters[i] = chars[i];
        }
    }

    String() : characters(nullptr) {}

    ~String() {
        delete[] characters;
    }

    int length() {
        int len = 0;
        while (characters[len] != '\0') {
            len++;
        }
        return len;
    }

    int indexFirst(char ch) {
        for (int i = 0; characters[i] != '\0'; i++) {
            if (characters[i] == ch) {
                return i;
            }
        }
        return -1;
    }

    int indexLast(char ch) {
        int len = length();
        for (int i = len - 1; i >= 0; i--) {
            if (characters[i] == ch) {
                return i;
            }
        }
        return -1;
    }

    int count(char ch) {
        int count = 0;
        for (int i = 0; characters[i] != '\0'; i++) {
            count += (characters[i] == ch) ? 1 : 0;
        }
        return count;
    }

    void replaceAll(char old, char ch) {
        for (int i = 0; characters[i] != '\0'; i++) {
            characters[i] = (characters[i] == old) ? ch : characters[i];
        }
    }

    void display() {
        cout << characters << endl;
    }
};

int main() {
    const char *request = "AzizbekDev";
    String s1(request);
    cout << "Length: " << s1.length() << endl;
    cout << "First Index: " << s1.indexFirst('e') << endl;
    cout << "Last Index: " << s1.indexLast('e') << endl;
    cout << "Count: " << s1.count('e') << endl;
    s1.display();
    s1.replaceAll('e', 'b');
    cout << "Updated: ";
    s1.display();

    return 0;
}
