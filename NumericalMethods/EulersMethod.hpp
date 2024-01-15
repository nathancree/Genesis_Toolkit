#ifndef EULER_METHOD
#define EULER_METHOD

#include "NumericalMethod.hpp"
#include <string>

class EulerMethod : NumericalMethod {
// Basic ODE Solver (dy/dx = f(x,y)), not super useful or accurate when compared to other methods but is fine for a quick approximation of the solution
// Pick a step size and a target and provide initial x and y values (x must be less than target)
// Will return the approx value of the equation (not differential equation) at the target
private:
    double x;
    double y;
    double target;
    std::string func;
    double h;
public:
    EulerMethod(std::string function, double x0, double y0, double target, double stepsize);
    double function(double x, double y);
    double solve() override;
};

#endif