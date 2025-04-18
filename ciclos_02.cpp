#include <iostream>
using namespace std;

int main()
{
    int numero, suma = 0;
    cout << "ingrese el numero a verificar "; cin >> numero;
        
    for (int i = 1; i < numero; i++){
        if (numero % i == 0){
            suma += i;
        }
    }
    
    if (numero == suma){
        cout << "el numero es perfecto"<<endl;
    } else {
        cout << "no es perfecto"<<endl;
    }
}