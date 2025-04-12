#include <iostream>
using namespace std;

int main() {
    int salario;

    do {
        cout<<"Ingrese su salario:";
        cin>>salario;
        if (salario < 0){
            cout<< "Ingrese un salario valido"<<endl;
        } 
        else if (salario >= 0 && salario <= 9000){
            salario *= 1.2;
        }
        else if (salario > 9000 && salario <= 15000){
            salario *= 1.1;
        } 
        else if (salario > 15000 && salario <= 20000){
            salario *= 1.05;
        }

        cout << "Su nuevo salario es: " << salario << endl;
    } while (salario >= 0);

    return 0;
}