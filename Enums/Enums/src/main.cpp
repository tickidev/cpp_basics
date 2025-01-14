#include <iostream>

// Define an enum named 'Status' to represent the state of a request.
enum Status
{
	Pending = 0, // Custom value: Status is Pending (value 1)
	Approved,	 // Automatically assigned 2: Status is Approved
	Rejected,    // Automatically assigned 3: Status is Rejected
};

// Function that converts an enum value of type 'Status' into a string.
static std::string statusToString(Status status)
{
	// Using a switch-case statement to return the string representation of the enum
	switch (status)
	{
	case Pending: 
		return "Pending";			// Return "Pending" if status is 'Pending'
		break;
	case Approved:
		return "Approved";			// Return "Approved" if status is 'Approved'
		break;
	case Rejected:
		return "Rejected";			// Return "Rejected" if status is 'Rejected'
		break;
	default:
		return "Unknown Status";    // Default case for any unknown status
		break;
	}
}

int main()
{
	// Declare a variable 'currentStatus' of type 'Status' and set it to 'Approved'.
	Status currentStatus = Pending;

	// Print the current status as a string using the 'statusToString()' function
	std::cout << "Current status; " << statusToString(currentStatus) << std::endl;

	// Check the value of 'currentStatus' and display appropriate messages
	if (currentStatus == Approved)
	{
		std::cout << "The request has been approved!" << std::endl;	// If status is 'Approved'
	}
	else if (currentStatus == Pending)
	{
		std::cout << "The request is still pending." << std::endl;	// If status is 'Pending'
	}
	else if (currentStatus == Rejected)
	{
		std::cout << "The request was rejected." << std::endl;		// If status is 'Rejected'
	}

	return 0;
}