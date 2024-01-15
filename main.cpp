#include "NumericalMethods/BisectionMethod.hpp"
#include "NumericalMethods/EulersMethod.hpp"
#include <iostream>

using namespace std;

int main() {
    BisectionMethod bisection("x*x-16",-3, 5, 0.001);
    double bresult = bisection.solve();

    cout << "Bisection Method Result: " << bresult << endl;

    EulerMethod euler("e^x", 0, 1, 1, 0.0001); //actual value is approx e = 2.718281828459045
    double eresult = euler.solve();

    cout << "Euler Method Result: " << eresult << endl;

    return 0;
}