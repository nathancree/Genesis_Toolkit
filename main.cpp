#include "NumericalMethods/BisectionMethod.hpp"
#include "NumericalMethods/EulersMethod.hpp"
#include "NumericalMethods/RK4Method.hpp"
#include <iostream>

using namespace std;

int main() {
    BisectionMethod bisection("x*x-16",-3, 5, 0.001);
    double result = bisection.solve();

    cout << "Bisection Method Result: " << result << endl;

    EulerMethod euler("e^x", 0, 1, 1, 0.0001); //actual value is approx e = 2.718281828459045
    result = euler.solve();

    cout << "Euler Method Result: " << result << endl;

    RungeKutta rungeKutta("e^x", 0, 1, 1, 0.1); //actual value is approx e = 2.718281828459045
    result = rungeKutta.solve();

    cout << "Runge-Kutta Method Result: " << result << endl;

    return 0;
}