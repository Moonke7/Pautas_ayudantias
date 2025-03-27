#include <iostream>
using namespace std;

int main()
{
    int fecha;
    cout<<"ingrese fecha de nacimiento"<<endl;
    cin>>fecha;
    
    int mes = (fecha / 100) % 100;
    int dia = fecha % 100;
    
    if((dia == 18 || dia == 19) && mes == 9)
    {
        cout<<"eres super pratiota, viva chile"<<endl;
    }
    else if(dia ==18 || dia == 19){
        cout<<"eres patriota"<<endl;
    } else {
        cout<<"normal"<<endl;
    }
    
}