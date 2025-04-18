#include <iostream>
using namespace std;

int main()
{
    int a, b, sum_a = 0, sum_b = 0;
    cout << "ingrese el numero a: "; cin>> a;
    cout << "ingrese el numero b: "; cin>> b;
    
    for (int i = 1; i < a; i++){
        if(a % i == 0){
            sum_a += i;
        }
    }
    
    for (int i = 1; i < b; i++){
        if(b % i == 0){
            sum_b += i;
        }
    }
    
    if (a == sum_b && b == sum_a){
        cout << "los numeros son amigos" << endl;
    } else {
        cout << "los numeros no son amigos" << endl;
    }
}