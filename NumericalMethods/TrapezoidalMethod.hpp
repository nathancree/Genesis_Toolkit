#ifndef TRAPEZOIDAL_METHOD
#define TRAPEZOIDAL_METHOD

#include "NumericalMethod.hpp"
#include <string>

class TrapezoidalRule : NumericalMethod {
// Integration numerical technique takes definite integral from "start" to "end" and subdivides "num" times
// Creates and sums trapezoids that fit under the curve
// Useful for when more accurate mthods such as Simpson's Rule are not necessary or feasible
private:
    double a, b, n;
    std::string func;
public:
    TrapezoidalRule(std::string function, double start, double end, double num);
    double function(double x);
    double solve() override;
};

#endif