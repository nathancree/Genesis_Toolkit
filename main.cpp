#include "NumericalMethods/BisectionMethod.hpp"
#include <iostream>

int main() {
    BisectionMethod bisection("x*x-16",-3, 5, 0.001);
    double result = bisection.solve();

    std::cout << "Result: " << result << std::endl;

    return 0;
}