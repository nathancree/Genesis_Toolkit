#ifndef BISECTION_METHOD
#define BISECTION_METHOD

// Include base NumericalMethod interface
#include "NumericalMethod.hpp"

class BisectionMethod : public NumericalMethod {
public:
    double solve(double leftEndpoint, double rightEndPoint, double tolerence) const;
};

#endif

