#include "RK4Method.hpp"
#include <string>
#include <cmath>

RungeKutta::RungeKutta(std::string function, double x0, double y0, double target, double stepsize) {
    this->func = function;
    this->x = x0;
    this->y = y0;
    this->target = target;
    this->h = stepsize;
}

double RungeKutta::function(double x, double y) {
    // TODO:
    // Use library to parse func into a function and either store it here once (optimal)
    // or calculate it everytime to come up with an expression that is usable on the values x and y
    return exp(x);
}

double RungeKutta::solve() {
    double k1, k2, k3, k4;
    while (abs(target - x) > 0.0001) { // needed for accuracy because of error in x
        k1 = function(x,y);
        k2 = function(x + h/2, y + h * k1/2);
        k3 = function(x + h/2, y + h * k2/2);
        k4 = function(x + h, y + h * k3);

        y = y + h/6 * (k1 + 2*k2 + 2*k3 + k4);
        x = x + h;
    }

    return y;
}