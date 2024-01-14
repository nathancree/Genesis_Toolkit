#include "BisectionMethod.hpp"
#include <iostream>

double BisectionMethod::solve() { 

    // Error check left and right endpoints
    if (function(l) * function(r) >= 0) {
        std::cerr << "Endpoints must have opposite signs" << std::endl;
        return NAN;
    }

    while ((r - l) >= tolerance) {
        mid = (r + l) / 2.0;

        if(function(mid) == 0.0) {
            break;
        }

        if(function(mid) * function(l) > 0) {
            l = mid;
        } else {
            r = mid;
        }
    }
}

BisectionMethod::BisectionMethod(double endpoint0, double endPoint1, double tolerance) {
    this->l = endpoint0;
    this->r = endPoint1;
    this->tolerance = tolerance;
    this->mid = l;
}

double BisectionMethod::function(double x) {
    return x * x - 16;
}