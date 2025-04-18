using namespace std;
#include <iostream>

int main()
{
    int ingreso_total, numero_personas, IPE;
    
    cout << "Ingreso total de la familia: "; cin >> ingreso_total;
    cout << "numero de personas en la familia: "; cin >> numero_personas;
    
    IPE = ingreso_total / (numero_personas * 0.18);
    if(IPE > 0 && IPE <= 217000){
        cout << "Grupo socioeconomico E" << endl;
    } else if (IPE > 217000 && IPE <= 379000){
        cout << "Grupo socioeconomico D" << endl;
    } else if (IPE > 379000 && IPE <= 681000){
        cout << "Grupo socioeconomico C2" << endl;
    } else if (IPE > 681000 && IPE <= 1153000){
        cout << "Grupo socioeconomico C1" << endl;
    } else if (IPE > 1153000 && IPE <= 2011000){
        cout << "Grupo socioeconomico B" << endl;
    } else if (IPE > 2011000){
        cout << "Grupo socioeconomico A" << endl;
    } else {
        cout << "Ingreso no valido" << endl;
    }
}