#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

void switch:case(strig& cadena){
    for (int i = 0; i < cadena-length(); i++){
        if (cadena[i] >= 'a' && cadena[i] <= 'z'){
            cadena[i] = cadena[i] - 32;
        }else if (cadena[i]>= 'A' && cadena[i] <= 'Z'){
            cadena [i] = cadena[i] + 32;
        }
    }
    for (int i= 0;i < cadena.length(); i++){
        cout << cadena[i];
    } 
    cout << endl;
}

