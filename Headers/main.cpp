// main.cpp
#include <iostream>
// Here we include the header file "Calculator.h".
// This gives us access to the function declarations (the "prototypes") from the header file.
// In other words, it tells the compiler what functions we will be using without needing the actual function code yet.
#include "Calculator.h"

int main() {
    int a = 10, b = 5;

    // Now we use the functions declared in "Calculator.h" and defined in "Calculator.cpp".
    // The header file simply declares the function names and their parameters, so we know how to use them in "main.cpp".

    // Function call for addition:
    std::cout << "Addition: " << add(a, b) << std::endl;
    // Function call for subtraction:
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    // Function call for multiplication:
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;
    // Function call for division:
    std::cout << "Division: " << divide(a, b) << std::endl;

    return 0;
}
