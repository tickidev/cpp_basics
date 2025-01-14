#include <iostream>

// Define a class 'Person' that manages dynamically allocated memory
class Person {
private:
    std::string name;  // Name of the person
    int* age;          // Pointer to dynamically allocated memory for age

public:
    // Constructor that initializes name and allocates memory for age
    Person(std::string n, int a) {
        name = n;          // Initialize name
        age = new int;     // Dynamically allocate memory for age
        *age = a;          // Set the value of age
        std::cout << "Person object created!" << std::endl;
    }

    // Destructor that deallocates memory for age
    ~Person() {
        delete age;       // Deallocate the memory allocated for age
        std::cout << "Person object destroyed and memory cleaned up!" << std::endl;
    }

    // Function to display the person's information
    void displayPersonInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << *age << std::endl;  // Dereference pointer to display the age
    }
};

// The main function where the execution of the program starts
int main() {
    // Create a 'Person' object dynamically using the parameterized constructor
    Person* p1 = new Person("John", 30);  // Using the new keyword to create the object on the heap

    // Display information about the person
    std::cout << "Person Information (using constructor with dynamic memory):" << std::endl;
    p1->displayPersonInfo();  // Access the display function using the pointer

    // When the pointer 'p1' goes out of scope, the destructor will be called
    // We manually delete the object to ensure the destructor is invoked
    delete p1;  // Calling delete invokes the destructor and cleans up the memory

    return 0;  // Return 0 to indicate successful execution of the program
}
