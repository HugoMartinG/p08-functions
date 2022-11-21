#include <iostream>
#include <math.h>
using namespace std;

float TriangleArea(int number1, int number2, int number3);

int main (){
    int number1, number2, number3;

    cin >> number1 >> number2 >> number3;

    cout << TriangleArea(number1, number2, number3) << endl;

    return 0;
}

float TriangleArea(int number1, int number2, int number3){
    float area;

    area = ((number1+number2+number3)/2);
    
    return area;
}
