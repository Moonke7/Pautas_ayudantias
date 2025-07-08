#include <iostream>
#include <time.h>
using namespace std;
void llenar(int x[27])
 {
  
  srand(time(NULL));
  x[0] = 0;
  for (int i = 1; i < 30; i++)
   {
    x[i] = rand() % (10);
   }
 }
 
void mostrar(int x[27])
{
  
  for (int i = 0; i < 27; i++)
   {
    cout << x[i] << " - ";
   }
   cout << endl; 
}

int tiempoTraslado(int redlinea1[27], int origen, int destino)
 {
     int tiempo = 0;
     if (origen > destino || origen < 0 || origen >= 27 || destino < 0 || destino >= 27)
      {
          tiempo = -1;
      }
     else
      {
          for(int i = origen + 1; i <= destino; i++)
           {
             tiempo = tiempo + redlinea1[i];  
           }
      }
     return tiempo;
 }

int main()
 {
  int linea[27];
  llenar(linea);
  mostrar(linea);
  cout << tiempoTraslado(linea, 0, 100)<<endl;
  cout << tiempoTraslado(linea, 2, 2)<<endl;
}