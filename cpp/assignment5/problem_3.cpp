#include <iostream>
#include <cstring> // For strlen

char* concatenateStrings(const char* str1, const char* str2) {
    // Determine the lengths of the input strings
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Dynamically allocate memory for the concatenated string
    char* result = new char[len1 + len2 + 1]; // +1 for the null-terminator

    // Copy the first string into the result
    strcpy(result, str1);

    // Concatenate the second string to the result
    strcat(result, str2);

    return result;
}

int main() {
    // Example usage
    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    // Call the function to concatenate strings
    char* concatenatedString = concatenateStrings(str1, str2);

    // Print the concatenated string
    std::cout << "Concatenated String: " << concatenatedString << std::endl;

    // Free the dynamically allocated memory
    delete[] concatenatedString;

    return 0;
}
