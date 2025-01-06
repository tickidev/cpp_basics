#include <iostream>

int main() {

    // -----------------------------
    // 1. Basic if and else Statement
    // -----------------------------
    int age = 20;

    // Checking if the person is an adult or a minor using if-else statement.
    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    }
    else {
        std::cout << "You are a minor." << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // ------------------------------
    // 2. Using else if for Multiple Conditions
    // ------------------------------
    int temperature = 25;

    // Check the temperature and print appropriate message.
    if (temperature > 30) {
        std::cout << "It's hot!" << std::endl;
    }
    else if (temperature >= 20) {
        std::cout << "It's warm." << std::endl;
    }
    else {
        std::cout << "It's cold." << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // ---------------------------
    // 3. Using Switch Statement
    // ---------------------------
    int day = 3; // 1 = Sunday, 2 = Monday, 3 = Tuesday, etc.

    // Using switch statement to check the value of 'day' and print the day of the week.
    switch (day) {
    case 1:
        std::cout << "It's Sunday!" << std::endl;
        break;
    case 2:
        std::cout << "It's Monday!" << std::endl;
        break;
    case 3:
        std::cout << "It's Tuesday!" << std::endl;
        break;
    default:
        std::cout << "Invalid day!" << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // ------------------------------
    // 4. Combining Conditions (Logical Operators)
    // ------------------------------
    bool hasLicense = true;

    // Check if the person is at least 18 and has a license to drive.
    if (age >= 18 && hasLicense) {
        std::cout << "You are allowed to drive!" << std::endl;
    }
    else {
        std::cout << "You are not allowed to drive." << std::endl;
    }

    return 0;
}
