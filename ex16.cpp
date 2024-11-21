#include <iostream>
#include <iomanip> 

int main() {
   
    float P, R;
    int T;

  
    std::cout << "Enter the principal amount (P): ";
    std::cin >> P;
    std::cout << "Enter the time period (T, in years): ";
    std::cin >> T;
    std::cout << "Enter the interest rate (R, in %): ";
    std::cin >> R;

   
    float I = (P * T * R) / 100;


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Simple Interest as float: " << I << std::endl;
    std::cout << "Simple Interest as int: " << static_cast<int>(I) << std::endl;

    return 0;
}
