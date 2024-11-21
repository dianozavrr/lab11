#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter the first integer (a): ";
    std::cin >> a;
    std::cout << "Enter the second integer (b): ";
    std::cin >> b;
    
    std::cout << "Sum (a + b): " << a + b << std::endl;
    std::cout << "Difference (a - b): " << a - b << std::endl;
    std::cout << "Product (a * b): " << a * b << std::endl;
    
    return 0;
}
