#include <iostream>
using namespace std;

int main()
{
    int numVentas = 0, ventasMayores = 0, ventasMenores = 0;
    float cantidadVendida = 0, comisionTotal = 0;

    float venta = 1;
    while (true){
        cout << "Ingrese la cantidad vendida: "; cin >> venta;
        
        if(venta < 0){
            break;
        }
    
        if (venta > 10000){
            cantidadVendida += venta;
            comisionTotal += venta * 0.03;
            ventasMayores++;
        } else {
            cantidadVendida += venta;
            ventasMenores++;
        }
        numVentas++;
    }
    if (venta < 0 && numVentas == 0){
        cout << "La venta no es valida" << endl;
        return 0;
    }

    cout << "Numero de ventas: " << numVentas << endl;
    cout << "Ventas mayores a 10000: " << ventasMayores << endl;
    cout << "Ventas menores a 10000: " << ventasMenores << endl;
    cout << "Cantidad vendida: " << cantidadVendida << endl;
    cout << "Comision total: " << comisionTotal << endl;
    return 0;
}