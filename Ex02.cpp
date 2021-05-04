  
#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char cadena[100], copia[100];

    cout << "Insira uma palavra" <<endl;
    cin >> cadena;

    for (int i= (strlen(cadena) - 1); i >= 0; i--){
        copia[strlen(cadena) -1 -i] = cadena [i];
    }
    if (strcmp(cadena, copia) == 0){
        cout << "É uma palavra palindroma";
    }else{
        cout <<"A palavra não e palindroma";

    }
    return 0;
}
