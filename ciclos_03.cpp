#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "ingrese el numero a verificar "; cin >> numero;
    
    bool esPrimo = true;
    for (int i = 2; i < numero; i++){
        if (numero % i == 0){
            esPrimo = false;
        }
    }
    
    if (esPrimo == true){
        cout << "el numero es primo"<<endl;
    } else {
        cout << "el numero no es primo"<<endl;
    }
}