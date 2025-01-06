#include <iostream>

int main() {
    // -----------------------
    // 1. Using a for loop
    // -----------------------
    std::cout << "Using for loop:" << std::endl;
    // A for loop is typically used when you know in advance how many times you want to repeat a block of code.
    // Syntax: for(initialization; condition; increment/decrement) { // code }
    for (int i = 1; i <= 5; i++) {
        std::cout << "Iteration: " << i << std::endl;
    }

    std::cout << "-------------------------" << std::endl;

    // ------------------------
    // 2. Using a while loop
    // ------------------------
    std::cout << "Using while loop:" << std::endl;
    // A while loop is used when you want to repeat a block of code as long as a condition remains true.
    // Syntax: while (condition) { // code }
    int j = 1;
    while (j <= 5) {
        std::cout << "Iteration: " << j << std::endl;
        j++;  // Don't forget to increment (or modify) the condition variable!
    }

    std::cout << "-------------------------" << std::endl;

    // --------------------------
    // 3. Using a do-while loop
    // --------------------------
    std::cout << "Using do-while loop:" << std::endl;
    // A do-while loop is similar to the while loop, except that it always executes the block of code
    // at least once, even if the condition is false initially.
    // Syntax: do { // code } while (condition);
    int k = 1;
    do {
        std::cout << "Iteration: " << k << std::endl;
        k++;  // Again, remember to modify the condition variable.
    } while (k <= 5);

    std::cout << "-------------------------" << std::endl;

    // ---------------------------
    // 4. Infinite Loop with Break
    // ---------------------------
    std::cout << "Using infinite loop with break:" << std::endl;
    // An infinite loop can be useful in certain situations, but we need to be careful.
    // If you want to stop the infinite loop, use the break statement.
    // Syntax: while(true) { // code; if (condition) break; }
    int l = 1;
    while (true) {
        std::cout << "Iteration: " << l << std::endl;
        if (l == 5) {
            break;  // The loop will exit when l reaches 5.
        }
        l++;
    }

    return 0;
}
