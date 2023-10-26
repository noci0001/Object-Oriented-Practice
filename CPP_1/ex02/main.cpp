#include <iostream>

int main() {

    std::string message = "HI THIS IS BRAIN";
    std::string* stringPTR = &message;
    std::string& stringREF = message;

    //MEMORY ADDRESS
    std::cout << "ADDRESS OF STRING -> " << &message << std::endl;
    std::cout << "ADDRESS OF STRING -> " << &stringPTR << std::endl;
    std::cout << "ADDRESS OF STRING -> " << &stringREF << std::endl;

    //VALUE
    std::cout << "ADDRESS OF STRING -> " << message << std::endl;
    std::cout << "ADDRESS OF STRING -> " << stringPTR << std::endl;
    std::cout << "ADDRESS OF STRING -> " << stringREF << std::endl;

    return (0);
}