#include <iostream>
#include <string>

int main() {
    std::string name;
    
    //name request
    std::cout << "Enter the name: ";
    std::getline(std::cin, name); //line input
    
    //greeting input
    std::cout << "Hello "<< name << "!" <<std::endl;
    
    return 0;
}
