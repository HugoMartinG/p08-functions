/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Hugo MArtin Gamez
 * @date 22 Nov 2022
 * @brief Iterative factorial program.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>
using namespace std;
int factorial (int n);
int main (){
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}

int factorial (int n){
    int result{1};

    for (int i=1; i <= n; i++){
        result *=i;
    }
    return result;
}
