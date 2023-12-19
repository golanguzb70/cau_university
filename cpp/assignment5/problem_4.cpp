#include <iostream>

// Function prototype for addition
int add(int a, int b);

// Function prototype for multiplication
int multiply(int a, int b);

int main() {
    // Function pointer declaration
    int (*operation)(int, int);

    // User input for selecting the operation
    std::cout << "Choose operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Multiplication\n";
    int choice;
    std::cin >> choice;

    // Set the function pointer based on user choice
    if (choice == 1) {
        operation = add;
    } else if (choice == 2) {
        operation = multiply;
    } else {
        std::cerr << "Invalid choice. Exiting.\n";
        return 1;
    }

    // User input for two integers
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Perform the selected operation using the function pointer
    int result = operation(num1, num2);

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Function definition for multiplication
int multiply(int a, int b) {
    return a * b;
}
