#include <iostream>
#include <cmath>
using namespace std;

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7){

    if(fabs(number1 - number2) < epsilon)
        return true; //they are same
        return false; //they are not same

}
