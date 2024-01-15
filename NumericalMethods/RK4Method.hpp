#ifndef RUNGE_KUTTA
#define RUNGE_KUTTA

#include "NumericalMethod.hpp"
#include <string>

class RungeKutta : NumericalMethod {
private:
    double x, y, target, h;
    std::string func;

public:
    RungeKutta(std::string function, double x0, double y0, double target, double stepsize);
    double function(double x, double y);
    double solve() override;

};

#endif