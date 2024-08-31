#include <iostream> // A preprocessor directive, this includes all the code contained within the standard library file iostream, which is used for basic input and output

// The main function is the entry point of a C++ program (This is the function that is first called when your run the program).
int main() {
	// std::cout is a predefined object of type ostream (output stream) that is used for output operations. It is defined in iostream and allows us to write text to the console.
	// The << operator is used to insert the value on the right side of the operator into the output stream on the left side.
	// std::endl is a manipulator that inserts a newline character into the output stream. It is defined in iostream and causes the output to be displayed on a new line.
	std::cout << "Hello, World!" << std::endl; // Outputting text to the console

	return 0; // This line indicates that the program has completed successfully
}