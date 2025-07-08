#include <iostream>
using namespace std;

void genera_premios(string x[20]){
    string premios[3] = {"plancha", "notebook", "tv"};

    for (int i = 0 ; i < 20; i++){
        int indice = rand() % 3;
        x[i] = premios[indice];
    }

    int indice1 = rand() % 20;
    int indice2 = rand() % 20;

    do{
        indice2 = rand() % 20;
    } while (indice1 == indice2);

    x[indice1] = "comodin";
    x[indice2] = "agujero-negro";
}

//obtuvo este premio notebook

string validaJuego(string x[20], int pos1, int pos2){
    if (x[pos1] == "agujero-negro" || x[pos2] == "agujero-negro"){
        return "muerte";
    } 

    else if(x[pos1] == "comodin" || x[pos2] == "comodin"){
        if(x[pos1] == "comodin"){
            return "obtuvo este premio gracias al comodin: " + x[pos2];
        }
        else {
            return "obtuvo este premio gracias al comodin: " + x[pos1];
        }
    }
    
    else if (x[pos1] == x[pos2]){
        return "obtuvo este premio: " + x[pos1];
    }

    else {
        return "Siga participando";
    }
}

int main()
{
    string premios[20];
    genera_premios(premios);

    for (int i = 0; i < 3; i++){
        int posicion1, posicion2;

        cout <<"Ingrese el valor de la casilla 1"; cin>> posicion1;
        cout <<"Ingrese el valor de la casilla 2"; cin>> posicion2;

        if (posicion1 >= 0 && posicion1 <= 20 && posicion2 >= 0 && posicion2 <= 20){
            cout << validaJuego(premios, posicion1, posicion2) << endl;

            if (validaJuego(premios, posicion1, posicion2) != "Siga participando"){
                break;
            }
        }
    }
}