#include <iostream>

#include "src/power_calc.hpp"

int main() {
  std::cout << "A naive:       2 to the power of 5 is " << naivePower(2,5) << std::endl;
  std::cout << "An uoptimized: 2 to the power of 5 is " << unoptimizedDCPower(2,5) << std::endl;
  std::cout << "An optimized:  2 to the power of 5 is " << optimizedDCPower(2,5) << std::endl;
}
