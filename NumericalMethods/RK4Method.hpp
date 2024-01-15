#ifndef RUNGE_KUTTA
#define RUNGE_KUTTA

#include "NumericalMethod.hpp"
#include <string>

class RungeKutta : NumericalMethod {
// Approximates a solution for an ODE (dy/dx = f(x,y) given initial x and y values. Pick a step size and a target for the solution to
// y(target). Much better than Euler Method
// TODO:
// Can be generalized to the explicit Runge-Kutta method instead of 4th order pick your order and just have as many ks as you need
// For that could potentially use arrays.
private:
    double x, y, target, h;
    std::string func;

public:
    RungeKutta(std::string function, double x0, double y0, double target, double stepsize);
    double function(double x, double y);
    double solve() override;

};

#endif