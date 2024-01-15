#ifndef BISECTION_METHOD
#define BISECTION_METHOD

// Include base NumericalMethod interface
#include "NumericalMethod.hpp"
#include <string>

class BisectionMethod : public NumericalMethod {
// Basic root finding algorithm. Need to start with a left side endpoint and right side endpoint that straddle a root
// f(x) and f(y) need to be opposite signs
// Works best when you can see the graph of f(x) and can approximate points
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

