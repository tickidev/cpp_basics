#include <iostream>

int main() {
    // Integer (int): Can store both positive and negative whole numbers
    // Size: Typically 4 bytes (32 bits) on most systems
    int age = 19;
    std::cout << "Integer size: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Int variable: " << age << std::endl;

    // Unsigned Integer (unsigned int): Can store only positive whole numbers
    // Size: Typically 4 bytes (32 bits) on most systems, but the range is doubled since it can't store negative values
    unsigned int revenue = 4294967295; // Max value for an unsigned int (2^32 - 1)
    std::cout << "Unsigned Integer size: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Unsigned int variable: " << revenue << std::endl;

    // Character (char): Stores a single character or small integer value (ASCII range)
    // Size: 1 byte (8 bits)
    char letter = 'A'; // 'A' is stored as its ASCII value (65)
    std::cout << "Char size: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Char variable: " << letter << std::endl;

    // Short Integer (short): Can store smaller integers than a regular int
    // Size: Typically 2 bytes (16 bits)
    short smallNumber = 32767; // Max value for a short integer (2^15 - 1)
    std::cout << "Short size: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Short variable: " << smallNumber << std::endl;

    // Long Integer (long): Can store larger integers than a regular int
    // Size: Typically 4 bytes (32 bits) on 32-bit systems, 8 bytes (64 bits) on 64-bit systems
    long longNumber = 2147483647; // Max value for a signed long on 32-bit systems
    std::cout << "Long size: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Long variable: " << longNumber << std::endl;

    // Long Long Integer (long long): Can store very large integers
    // Size: Typically 8 bytes (64 bits)
    long long veryLargeNumber = 9223372036854775807; // Max value for a signed long long (2^63 - 1)
    std::cout << "Long Long size: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Long Long variable: " << veryLargeNumber << std::endl;

    // Float: Stores single-precision floating-point numbers (decimals)
    // Size: Typically 4 bytes (32 bits)
    float pi = 3.14159f; // f is used to specify a float literal
    std::cout << "Float size: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Float variable: " << pi << std::endl;

    // Double: Stores double-precision floating-point numbers (decimals with more precision)
    // Size: Typically 8 bytes (64 bits)
    double piDouble = 3.14159265358979323846; // More precise value of pi
    std::cout << "Double size: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Double variable: " << piDouble << std::endl;

    // Boolean (bool): Stores true or false values
    // Size: Typically 1 byte (8 bits) but only stores true (1) or false (0)
    bool isRaining = true;
    std::cout << "Bool size: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "Bool variable: " << (isRaining ? "Yes" : "No") << std::endl;

    // Printing all sizes and variables
    std::cout << "\nSummary of all variable types and sizes:" << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " byte" << std::endl;

    // End of program (waiting for user input before closing)
    std::cout << "\nPress Enter to exit...";
    std::cin.get();
    return 0;
}
