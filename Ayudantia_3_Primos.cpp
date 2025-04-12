#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "ingrese el limite inferior: ";
    cin >> n1;
    cout << "ingrese el limite superior: ";
    cin >> n2;

    int contador = 0;
    bool esPrimo;
    for (int i = n1; i <= n2; i++)
    {
        esPrimo = true;
        if (i >= 2)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    esPrimo = false;
                }
            }

            if (esPrimo == true)
            {
                contador++;
            }
        }
    }

    cout << "Entre " << n1 << " Y " << n2 << ", hay " << contador << " primos" << endl;

    return 0;
}