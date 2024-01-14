#ifndef BISECTION_METHOD
#define BISECTION_METHOD

// Include base NumericalMethod interface
#include "NumericalMethod.hpp"

class BisectionMethod : public NumericalMethod {
private:
    double l;
    double r;
    double mid;
    double tolerance;
public:
    double solve() override;
    BisectionMethod(double endPoint0, double endPoint1, double tolerance);
    double function(double x);
};

#endif

