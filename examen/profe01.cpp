// 1.- Un espía secreto manda a su central mensajes en un arreglo de 50 posiciones, la central lo codifica de la siguiente manera, en el siguiente orden de análisis:

//- Si todos los valores del arreglo son iguales todo está normal

//- Si todos los valores son pares hay peligro en el sector poniente

//- Si todos los valores son impares hay peligro en el sector oriente

//- Si los valores son descendentes (de mayor a menor) el se encuentra en peligro

//- Cualquier otra opción "por favor rescátenme"
// Programe la función void descifrar(int x[50]), que recibe un arreglo de tamaño 50 e imprime de acuerdo al valor
// de las celdas del arreglo el mensaje enviado por el agente secreto

#include <iostream>
using namespace std;

void descifrar(int x[50]){
    int pares = 0;
    int impares = 0;

    int valor = x[0];
    bool iguales = true;
    for(int i = 0; i < 50; i++){
        if(x[i] != valor){
            iguales = false;
        }

        if (x[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    bool desc = true;
    for (int i = 0; i < 49; i++){
        if (x[i] < x[i + 1]){
            desc = false;
            break;
        }
    }

    if (iguales == true){
        cout << "todo normal" <<endl;
    } else if (pares == 50){
        cout << "peligro en el poniente" << endl;
    } else if (impares == 50){
        cout << "peligro en el oriente" << endl;
    } else if (desc == true) {
        cout << "peligro"<< endl;
    } else {
        cout << "porfa rescatenme";
    }
}

int main(){

}