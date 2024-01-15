#include "TrapezoidalMethod.hpp"
#include <string>

TrapezoidalRule::TrapezoidalRule(std::string function, double start, double end, double num) {
    this->a = start;
    this->b = end;
    this->n = num;
    this->func = function;
}

double TrapezoidalRule::function(double x) {
    // TODO:
    // Use library to parse func into a function and either store it here once (optimal)
    // or calculate it everytime to come up with an expression that is usable on the value x
    return x;
}

double TrapezoidalRule::solve() {
    double h = (b - a) / n; // h = step size
    double result = function(a);

    for (int i = 1; i < n; i++) {
        result += 2 * function(a + i * h);
    }

    return h * (result + function(b));
}