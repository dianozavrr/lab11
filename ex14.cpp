#include <iostream>

int main() {
    double A, B, C;
    
    std::cout << "Enter the Length (A): ";
    std::cin >> A;
    std::cout << "Enter the width (B): ";
    std::cin >> B;
    std::cout << "Enter the height (C): ";
    std::cin >> C;
    
    double volume = A * B * C;
    
    double surfaceArea = 2*(A * B + B * C + A * C);
    
    std::cout << "Volume of the parallelepiped: " << volume << std::endl;
    std::cout << "Surface area of the parallelepiped: " << surfaceArea << std::endl;
    
    return 0;
    }


