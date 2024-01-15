#include "EulersMethod.hpp"
#include <string>
#include <cmath>

EulerMethod::EulerMethod(std::string function, double x0, double y0, double target, double stepsize) {
    this->func = function;
    this->x = x0;
    this->y = y0;
    this->target = target;
    this->h = stepsize;
}

double EulerMethod::function(double x, double y) {
    // TODO:
    // Use library to parse func into a function and either store it here once (optimal)
    // or calculate it everytime to come up with an expression that is usable on the values x and y
    return exp(x);
}

double EulerMethod::solve() {
    while (x < target) {
        y = y + h * function(x, y);
        x = x + h;
    }
    return y;
}