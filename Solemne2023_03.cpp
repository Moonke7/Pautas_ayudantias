using namespace std;
#include <iostream>

int main()
{
    int numeroJugado, numeroGanador;

    cout << "Ingrese el numero jugado: ";
    cin >> numeroJugado;
    cout << "Ingrese el numero ganador: ";
    cin >> numeroGanador;

    int digito1 = numeroJugado / 1000;
    int digito2 = (numeroJugado / 100) % 10;
    int digito3 = (numeroJugado / 10) % 10;
    int digito4 = numeroJugado % 10;

    int digitoGanador1 = numeroGanador / 1000;
    int digitoGanador2 = (numeroGanador / 100) % 10;
    int digitoGanador3 = (numeroGanador / 10) % 10;
    int digitoGanador4 = numeroGanador % 10;

    if (digito1 == digitoGanador1 && digito2 == digitoGanador2 && digito3 == digitoGanador3 && digito4 == digitoGanador4)
    {
        cout << "Precio mayor" << endl;
    }
    else if ((digito1 == digitoGanador1 && digito2 == digitoGanador2) || (digito3 == digitoGanador3 && digito4 == digitoGanador4))
    {
        cout << "Premio par" << endl;
    }
    else if (digito4 == digitoGanador4)
    {
        cout << "Premio terminacion" << endl;
    }
    else
    {
        cout << "No hay premio" << endl;
    }
}