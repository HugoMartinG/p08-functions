#include <iostream>
#include "math.h"
double Function(double x, double y, double t){

    double result{0};

    double operation_1 = 2*t-4;

    result = (pow(operation_1, 0.5)) / (pow(x, 2) - pow(y, 2));

    return result;
}
