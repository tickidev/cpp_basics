#include <iostream>  // Including the iostream library for input and output operations

int main() {

    int age = 8;  // Declare an integer variable 'age' and initialize it to 8
    int* ptrAddress = NULL;  // Declare a pointer variable 'ptrAddress' and initialize it to NULL

    ptrAddress = &age;  // Assign the memory address of 'age' to the pointer 'ptrAddress'

    // Output the value stored at the memory address pointed to by ptrAddress
    std::cout << *ptrAddress << std::endl;  // Dereferencing the pointer to get the value of 'age' (which is 8)

    // Output the memory address stored in ptrAddress (the address of 'age')
    std::cout << ptrAddress << std::endl;  // Printing the memory address where 'age' is stored

    *ptrAddress = 10;  // Modify the value stored at the memory address pointed to by ptrAddress
    // Dereferencing the pointer and changing the value of 'age' from 8 to 10

    // Output the memory address stored in ptrAddress again (which is still the same)
    std::cout << ptrAddress << std::endl;  // The memory address remains the same, it does not change

    // Output the updated value of 'age' via dereferencing the pointer (which is now 10)
    std::cout << *ptrAddress << std::endl;  // The new value of 'age' is 10 after modification

    std::cin.get();  // Wait for user input (to keep the console window open if needed)

}
