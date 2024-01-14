#include "NumericalMethods/BisectionMethod.hpp"
#include <iostream>

int main() {
    BisectionMethod bisection(-3, 3, 0.001);
    double result = bisection.solve();

    std::cout << "Result: " << result << std::endl;

    return 0;
}