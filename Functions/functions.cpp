#include <iostream>

// Function with an integer return type
// This function multiplies two integers and returns the result
int Multiply(int a, int b) {
    return a * b;
}

// Function with void return type
// This function multiplies two integers and logs the result to the console
void MultiplyAndLog(int a, int b) {
    int result = Multiply(a, b);  // Calling Multiply function to get the product
    std::cout << "Multiplication Result: " << result << std::endl;
}

// Function with a double return type
// This function divides two floating-point numbers and returns the result
double Divide(double a, double b) {
    if (b != 0) {
        return a / b;  // Avoid division by zero
    }
    else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0.0;  // Return 0 in case of division by zero
    }
}

// Function with a bool return type
// This function checks if a given number is even
bool IsEven(int number) {
    return number % 2 == 0;
}

// Function with a string return type
// This function takes an integer and returns a corresponding message
std::string GetNumberMessage(int number) {
    if (number > 0) {
        return "The number is positive.";
    }
    else if (number < 0) {
        return "The number is negative.";
    }
    else {
        return "The number is zero.";
    }
}

int main() {
    // Calling the MultiplyAndLog function to demonstrate void functions
    MultiplyAndLog(3, 2); // Should print "Multiplication Result: 6"
    MultiplyAndLog(4, 5); // Should print "Multiplication Result: 20"

    // Demonstrating the Divide function
    double result = Divide(10.0, 2.0);
    std::cout << "Division Result: " << result << std::endl; // Should print 5.0
    result = Divide(10.0, 0.0);  // Should trigger division by zero error message

    // Demonstrating the IsEven function
    int num = 6;
    std::cout << "Is " << num << " even? " << (IsEven(num) ? "Yes" : "No") << std::endl; // Should print "Yes"
    num = 7;
    std::cout << "Is " << num << " even? " << (IsEven(num) ? "Yes" : "No") << std::endl; // Should print "No"

    // Demonstrating the GetNumberMessage function
    int number = -10;
    std::cout << "Message: " << GetNumberMessage(number) << std::endl; // Should print "The number is negative."
    number = 0;
    std::cout << "Message: " << GetNumberMessage(number) << std::endl; // Should print "The number is zero."
    number = 15;
    std::cout << "Message: " << GetNumberMessage(number) << std::endl; // Should print "The number is positive."

    // Wait for user input to close the program
    std::cin.get();
    return 0;
}
