#include <iostream>
using namespace std;

char Change (char letter){

    if (letter>='A' && letter<='Z'){
          letter = letter + 32;
           
      }else if (letter>='a' && letter<='z'){
          letter = letter -32;
          
      }
    return letter;
}
int main (){
    char letter;
    while (cin >> letter){
        cout << Change(letter);
    }

    return 0;
}
