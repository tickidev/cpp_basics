#include <iostream>


// Define a class called 'Car'
class Car
{
private:
	std::string brand; // Variable to store the brand of the car
	int year;		   // Variable to store the year of manufacture
	std::string color; // Variable to store the color of the car

public:
	// Parameterized constructor to initialize the car attributes
	// The constructor takes three arguments: brand, year, and color
	Car(std::string b, int y, std::string c)
	{
		brand = b;	// Assign the brand pased as argument to the class variable 'brand'
		year = y;	// Assign the year pased as argument to the class variable 'year'
		color = c;  // Assign the color pased as argument to the class variable 'color'
		std::cout << "Car object created!" << std::endl; // Indicate that the car object has been created
	}

	// Default constructor with no arguments
	// Initializes the attributes to default values
	Car()
	{
		brand = "Unknown"; // Set default value for 'brand'
		year = 0;		   // Set default value for 'year'
		color = "Unknown"; // Set detault value for 'color'
		std::cout << "Default car object created!" << std::endl; // Indicate that the default car object has been created
	}

	// A member function to display the car's information
	void displayCarInfo()
	{
		std::cout << "Brand: " << brand << std::endl;
		std::cout << "Year: " << year << std::endl;
		std::cout << "Color: " << color << std::endl;
	}
};

int main()
{

	// Create a 'Car' object named 'myCar' using the parameterized constructor
	// Pass values for brand, year, and color to initialize the object
	Car myCar("Toyota", 2020, "Red");

	std::cout << "Car Information (using parameterized constructor): " << std::endl;
	myCar.displayCarInfo();

	std::cout << std::endl;


	// Create another 'Car' object named 'defaultCar' using the default constructor
	// No arguments are passed, so the default values are used
	Car defaultCar;

	std::cout << "Car information (using default constructor): " << std::endl;
	defaultCar.displayCarInfo();

	return 0;
	return 0;
}