#include <iostream>

int main() {

    // -------------------------
    // 1. if, else if, and else Statements
    // -------------------------
    int number = 10;

    std::cout << "Control flow using if-else statements:" << std::endl;

    // if statement: checks if number is positive
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    }
    // else if statement: checks if number is zero
    else if (number == 0) {
        std::cout << "The number is zero." << std::endl;
    }
    // else statement: checks if number is negative
    else {
        std::cout << "The number is negative." << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // -------------------------
    // 2. switch Statement
    // -------------------------
    int day = 4;  // Day of the week (1=Sunday, 2=Monday, etc.)

    std::cout << "Control flow using switch statement:" << std::endl;

    // Using switch to handle different cases based on day number.
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
    case 4:
        std::cout << "It's Wednesday!" << std::endl;
        break;
    case 5:
        std::cout << "It's Thursday!" << std::endl;
        break;
    case 6:
        std::cout << "It's Friday!" << std::endl;
        break;
    case 7:
        std::cout << "It's Saturday!" << std::endl;
        break;
    default:
        std::cout << "Invalid day!" << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // -------------------------
    // 3. break Statement
    // -------------------------
    std::cout << "Control flow using break statement:" << std::endl;

    // A loop that goes on until we encounter a break statement.
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Breaking the loop at i = " << i << std::endl;
            break;  // The loop will stop here when i is equal to 5.
        }
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // -------------------------
    // 4. continue Statement
    // -------------------------
    std::cout << "Control flow using continue statement:" << std::endl;

    // A loop that skips the current iteration when i is 5 and continues with the next iteration.
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Skipping i = " << i << std::endl;
            continue;  // Skips the current iteration (i = 5) and moves to the next.
        }
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // -------------------------
    // 5. return Statement
    // -------------------------
    std::cout << "Control flow using return statement:" << std::endl;

    // Using return to exit the program early
    std::cout << "Before returning from main" << std::endl;
    return 0;  // Exits the program early, so the code below will not be executed.
    std::cout << "This line won't be printed because of return." << std::endl;

    std::cout << "-------------------------" << std::endl;

    // -------------------------
    // 6. goto Statement (Discouraged)
    // -------------------------
    std::cout << "Control flow using goto statement:" << std::endl;

    // Label definition and usage of goto.
    int counter = 0;
startLoop:
    if (counter == 3) {
        std::cout << "Reached counter = 3, exiting loop." << std::endl;
        goto endLoop;  // This will jump to the endLoop label.
    }
    std::cout << "Counter: " << counter << std::endl;
    counter++;
    goto startLoop;  // Jumps back to the startLoop label.

endLoop:
    std::cout << "Exited loop via goto." << std::endl;

    return 0;
}
