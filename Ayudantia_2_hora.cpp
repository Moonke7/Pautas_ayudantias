#include <iostream>
using namespace std;

// solucion ayudante
int main()
{
    int hora;
    cout << "ingrese hora enformato hhmm" << endl;
    cin >> hora;

    int delta;
    cout << "ingrese delta" << endl;
    cin >> delta;

    int horas = hora / 100;
    int minutos = hora % 100;

    // se obtienen las horas de los minutos totales
    int minutos_sumados = minutos + delta;
    int horas_nuevo = horas + (minutos_sumados / 60);
    int minutos_nuevo = minutos_sumados % 60;

    // en caso de que la hora pase al siguiente dia, se formatea
    if (horas_nuevo >= 24)
    {
        horas_nuevo = horas_nuevo % 24;
    }

    int hora_nueva = (horas_nuevo * 100) + minutos_nuevo;

    // en caso de que la hora sea 00, no se veria, por lo que lo agregamos manualmente
    if (horas_nuevo == 0)
    {
        cout << "la hora nueva es: 00" << minutos_nuevo << endl;
    }
    else
    {
        cout << "la hora nueva es: " << hora_nueva << endl;
    }

    return 0;
}

// solucion profe
int main()
{
    int hhmm, hh, mm, delta, nuevosminutos;
    cout << "ingrese hora en formato hhmm" << endl;
    cin >> hhmm;
    cout << "ingrese delta" << endl;
    cin >> delta;
    hh = hhmm / 100;
    mm = hhmm % 100;
    cout << hh << endl;
    cout << mm << endl;
    nuevosminutos = hh * 60 + mm + delta;
    nuevosminutos = nuevosminutos % 1440;
    cout << "son las  " << nuevosminutos / 60 << ":" << nuevosminutos % 60 << endl;
    return 0;
}
