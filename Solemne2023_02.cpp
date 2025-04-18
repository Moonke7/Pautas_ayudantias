using namespace std;
#include <iostream>

// todo este ejercicio sera suponiendo que el ejercicio pide lo que se converso en ayudantia.
// el output de este ejercicio NO coincidira con el ejemplo de la guia.
int main()
{
    float bonificacion, suma_bonificacion = 0;
    int prestacionesN;

    cout << "Ingrese bonificacion: "; cin >> bonificacion;
    cout << "Ingrese numero de prestaciones: "; cin >> prestacionesN;
    
    bonificacion = bonificacion / 100; // se obtiene el valor decimal del porcentaje. Ej: 70 -> 0.7
    for (int i = 1; i <= prestacionesN; i++){
        float montoP, b1, restante; // bonificacion 1 =  b1
        cout << "Ingrese monto de la prestacion Nº" << i << ": "; cin >> montoP;

        if (montoP > 0){
            b1 = bonificacion * montoP; // se obtiene el valor de la bonificacion de isapre/fonasa
            restante = montoP - b1; // se obtiene el valor que queda por pagar
            restante = restante * 0.5; // se aplica la bonificacion universitaria del 50%
            cout << "Bonificacion total: " << b1 + restante << endl;

            suma_bonificacion += b1 + restante; // se suma la bonificacion total
        } else {
            cout << "Monto de la prestacion no valido" << endl;
            break;
        }
    }

    cout << "La bonificacion total es: " << suma_bonificacion - 20000<< endl;
}