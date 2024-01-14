#include "BisectionMethod.hpp"
#include <iostream>

double BisectionMethod::solve(double leftEndpoint, double rightEndPoint, double tolerence) const {
    double l = leftEndpoint;
    double r = rightEndPoint;
    double mid;

    // Error check left and right endpoints
    if (function(l) * function(r) >= 0) {
        std::cerr << "Endpoints must have opposite signs" << std::endl;
        return NAN;
    }

    while ((r - l) >= tolerence) {
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

double function(int x) {
    return x * x;
}