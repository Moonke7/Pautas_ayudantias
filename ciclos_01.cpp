#include <iostream>
using namespace std;

int main()
{
    int x, n, tiempo_total, vueltas = 1;
    cout<<"ingrese el numero de vueltas"; cin>> n;
    cout<<"Cuanto se demora en dar la primera vuelta?"; cin>> x;
    
    while(vueltas <= n){
        tiempo_total += x;
        if(vueltas % 3 == 0){
            x *= 1.2;
        }
        vueltas++;
    }
    
    cout<<"se demorara "<<tiempo_total<<" segundos, o "<<tiempo_total/60 << ":"<<tiempo_total%60<<" minutos"<<endl;

    return 0;
}