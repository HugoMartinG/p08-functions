/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Hugo Martin Gamez
 * @date 22 Nov 2022
 * @brief  A function that returns the absolute value of an integer n.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */
#include <iostream>
using namespace std;
int Absolute(int number);
int main () {
    int number;
    cin >> number;
    cout << Absolute(number) << endl;
}
int Absolute(int number){
    int absolute{0};
    if (number > 0){
        absolute = number;
    }else if (number < 0){
        absolute = (number * -1);
    }
    return absolute;
}
