#include <iostream>

// Define a class called Player
class Player
{
public:
    int x, y;     // Position of the player on the screen (x, y)
    int speed;     // Speed of the player's movement

    // Constructor to initialize the player with default values
    Player()
    {
        x = 0;      // Start position at x = 0
        y = 0;      // Start position at y = 0
        speed = 1;  // Default speed
    }

    // Method to move the player, based on input values for xa (horizontal) and ya (vertical)
    void Move(int xa, int ya)
    {
        x += xa * speed;   // Update the player's x position
        y += ya * speed;   // Update the player's y position
    }

    // Method to display the current position of the player
    void DisplayPosition()
    {
        std::cout << "Player Position: (" << x << ", " << y << ")" << std::endl;
    }
};

// Main function where the game loop could run
int main()
{
    Player player;  // Create a new player object

    // Display the initial position of the player
    std::cout << "Initial ";
    player.DisplayPosition();

    // Move the player to the right and upwards
    player.Move(10, -2);  // Move 10 units to the right (positive x) and 2 units upwards (negative y)

    // Display the new position of the player after movement
    std::cout << "After moving: ";
    player.DisplayPosition();

    // Move the player again to the left and downwards
    player.Move(-5, 3);  // Move 5 units to the left (negative x) and 3 units downwards (positive y)

    // Display the new position of the player after second movement
    std::cout << "After moving again: ";
    player.DisplayPosition();

    // Keep the console open until the user presses enter
    std::cin.get();

    return 0;
}
