#ifndef BISECTION_METHOD
#define BISECTION_METHOD

// Include base NumericalMethod interface
#include "NumericalMethod.hpp"
#include <string>

class BisectionMethod : public NumericalMethod {
private:
    double l;
    double r;
    double mid;
    double tolerance;
    std::string func;
public:
    BisectionMethod(std::string function, double endPoint0, double endPoint1, double tolerance);
    double function(double x);
    double solve() override;
};

#endif

