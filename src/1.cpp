// A simple school project
#include <iostream>

int main() {
    // Print "Hello World" to the console
    std::cout << "Hello World" << std::endl;
    
    // Ask the user for their name
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    
    // Print a message to the console with the user's name
    std::cout << "Hello, " << name << "!" << std::endl;
    
    return 0;
}
