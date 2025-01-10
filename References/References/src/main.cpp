#include <iostream>  // Include the iostream library for input and output operations

// Define a macro 'LOG' that takes a variable 'x' and prints its value followed by a newline
// This will replace LOG(x) with std::cout << x << std::endl; wherever it is used
#define LOG(x) std::cout << x << std::endl;

// Function to increment an integer passed by reference
void Increment(int& value)
{
    value++;  // Increment the value of the integer directly. Since it is passed by reference, it modifies the original integer.
}

// Function to swap the values of two integers passed by reference
void Swap(int& a, int& b)
{
    int temp = a;  // Store the value of 'a' temporarily
    a = b;         // Set 'a' to the value of 'b'
    b = temp;      // Set 'b' to the original value of 'a'
}

// Function to add an exclamation mark at the end of a string passed by reference
void AddExclamationMark(std::string& str)
{
    str += "!";  // Append '!' to the string. The string is modified directly since it's passed by reference.
}

int main()
{
    int a = 5;  // Declare an integer variable 'a' and initialize it to 5
    Increment(a);  // Call the Increment function, passing 'a' by reference. The value of 'a' will be incremented by 1.

    LOG(a);  // Print the value of 'a' using the LOG macro, which will now be 6 after the increment.
    LOG("");  // Print an empty line for better output readability

    int x = 10;  // Declare an integer 'x' and initialize it to 10
    int y = 20;  // Declare an integer 'y' and initialize it to 20

    LOG("Before Swap: [x : " << x << "], [y : " << y << "]");  // Print the values of 'x' and 'y' before swapping.

    Swap(x, y);  // Call the Swap function, passing 'x' and 'y' by reference. The values of 'x' and 'y' will be swapped.

    LOG("After Swap: [x : " << x << "], [y : " << y << "]");  // Print the values of 'x' and 'y' after the swap.
    LOG("");  // Print an empty line for better output readability

    std::string greeting = "Hello";  // Declare a string 'greeting' and initialize it to "Hello"

    LOG("Before: [ " << greeting << " ]");  // Print the value of 'greeting' before modifying it

    AddExclamationMark(greeting);  // Call the AddExclamationMark function, passing 'greeting' by reference. The string will be modified.

    LOG("After: [ " << greeting << " ]");  // Print the modified string 'greeting', which should now be "Hello!"

    std::cin.get();  // Wait for the user to press a key before closing the console window (useful in environments like VS or Code::Blocks)
}
