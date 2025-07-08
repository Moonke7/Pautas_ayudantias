/* 2.- Programe la función string premio(int boleto, int ganador), que recibe como parámetro dos números de lotería, el boleto jugado por el jugador y el boleto ganador. Asuma que tanto boleto como ganador tienen 5 cifras. La función devuelve los siguientes valore:

- "PREMIO MAYOR", si boleto = ganador
- "TERNA INICIAL", si los 3 primeros números del boleto son iguales a los 3 primeros del ganador
- "TERNA FINAL", si los últimos 3 números del boleto son iguales a los 3 últimos del ganador
- "TERMINACIÓN", si el último número del boleto es igual al último del ganador
- "NO TIENE PREMIO", sino se cumple ninguna opción anterior */

#include <iostream> 
using namespace std;

string premio(int boleto, int ganador){
    if (boleto ==  ganador){
        return "PREMIO MAYOR";
    } else if (boleto / 1000 == ganador / 1000){
        return "TERNA INICIAL";
    } else if (boleto % 1000 == ganador % 1000){
        return "TERNA FINAL";
    } else if (boleto % 10 == ganador % 10){
        return "TERMINACION";
    } else {
        return "NO GANO";
    }
}

int main(){
    int boleto = 99999;
    int ganador = 12345;

    cout << premio(boleto, ganador) << endl;
}

