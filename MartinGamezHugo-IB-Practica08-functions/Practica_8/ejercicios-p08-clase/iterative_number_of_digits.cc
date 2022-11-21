/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Hugo Martin Gamez
 * @date 22 Nov 2022
 * @brief An iterative function that returns the number of digits of a number n.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>
int NumberOfDigits(int number);
using namespace std;
int main (){
    int number;
    cin >> number;
    cout << NumberOfDigits(number) << endl;
    return 0;
}
int NumberOfDigits(int number){
    int count = 0;
    if (number !=0){
    while(number != 0) {
        number = number / 10;
        count++;
    }
    }else if(number==0){
        count =count+1;
    }
   return count;

 }
