// Include/header guard, makes sure NumericalMethod isn't included multiple times
#ifndef NUMERICAL_METHOD 
#define NUMERICAL_METHOD
// Base class/interface for numerical methods
class NumericalMethod {
private:
    // private vars would go here
public:
    virtual double solve() const = 0;
    virtual ~NumericalMethod() {}
};

// For learning sake:
// // Empty Constructor
// NumericalMethod::NumericalMethod(/* args */)
// {
// }

// Empty Destructor
// NumericalMethod::~NumericalMethod()
// {
// }

#endif