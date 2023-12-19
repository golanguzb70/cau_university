#include <iostream>
#include <cstring> // For strlen

char* reverseString(const char* input) {
    // Determine the length of the input string
    size_t length = strlen(input);

    // Dynamically allocate memory for the reversed string
    char* reversed = new char[length + 1]; // +1 for the null-terminator

    // Use pointers to reverse the string
    const char* inputPtr = input + length - 1;
    char* reversedPtr = reversed;

    while (length > 0) {
        *reversedPtr++ = *inputPtr--;
        --length;
    }

    // Null-terminate the reversed string
    *reversedPtr = '\0';

    return reversed;
}

int main() {
    // User input for a string
    std::cout << "Enter a string: ";
    
    // Read a string with spaces
    std::string userInput;
    std::getline(std::cin, userInput);

    // Convert string to C-style string for dynamic allocation
    const char* originalString = userInput.c_str();

    // Reverse the string using pointers
    char* reversedString = reverseString(originalString);

    // Print the original and reversed strings
    std::cout << "Original String: " << originalString << std::endl;
    std::cout << "Reversed String: " << reversedString << std::endl;

    // Deallocate the dynamically allocated memory
    delete[] reversedString;

    return 0;
}
